/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:02:55 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:02:58 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int			ft_sizeto(int nb)
{
	int				i;

	i = 0;
	if (nb == 0)
		return (0);
	else if (nb < 0)
		i++;
	else
	{
		while (nb)
		{
			i++;
			nb = nb / 10;
		}
	}
	return (i);
}

char				*ft_itoa(int n)
{
	int				i;
	unsigned int	x;
	int				sign;
	char			*buf;

	x = n;
	if ((sign = n) < 0)
		x = -n;
	if (!(buf = (char *)malloc(sizeof(char) * ft_sizeto(x) + 2)))
		return (NULL);
	if (sign == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (x == 0)
		buf[i++] = '0';
	while (x > 0)
	{
		buf[i++] = x % 10 + '0';
		x = x / 10;
	}
	if (sign < 0)
		buf[i++] = '-';
	buf[i] = '\0';
	ft_strrev(buf);
	return (buf);
}
