/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_print.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:49:55 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:49:56 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_isprint(str[i])))
			return (0);
		i++;
	}
	return (1);
}
