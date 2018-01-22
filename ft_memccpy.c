/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:05:02 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:05:04 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*strdest;
	unsigned char	*strsrc;
	unsigned char	to;

	strdest = (unsigned char *)dest;
	strsrc = (unsigned char *)src;
	to = (unsigned char)c;
	if (n)
	{
		while (n--)
		{
			*strdest = *strsrc;
			if (*strsrc == to)
				return ((void *)strdest + 1);
			strdest++;
			strsrc++;
		}
	}
	return (NULL);
}
