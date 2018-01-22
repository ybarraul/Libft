/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:05:47 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:05:50 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*strdest;
	const char	*strsrc;

	strdest = dest;
	strsrc = src;
	while (n > 0)
	{
		*strdest++ = *strsrc++;
		n--;
	}
	return (dest);
}
