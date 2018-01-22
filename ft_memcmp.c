/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:05:27 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:05:29 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*strs1;
	unsigned char	*strs2;

	strs1 = (unsigned char*)s1;
	strs2 = (unsigned char*)s2;
	while (n > 0 && *strs1 == *strs2)
	{
		strs1++;
		strs2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*strs1 - *strs2);
}
