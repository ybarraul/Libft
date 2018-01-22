/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:06:14 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:06:19 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *strsrc;
	char *strdest;

	strsrc = (char*)src;
	strdest = (char*)dest;
	if (strsrc < strdest)
	{
		strsrc = strsrc + n - 1;
		strdest = strdest + n - 1;
		while (n > 0)
		{
			*strdest-- = *strsrc--;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*strdest++ = *strsrc++;
			n--;
		}
	}
	return (dest);
}
