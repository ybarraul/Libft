/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:05:13 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:05:18 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char *strsrc;

	strsrc = (unsigned char*)src;
	while (n > 0 && *strsrc != (unsigned char)c)
	{
		strsrc++;
		n--;
	}
	if (n == 0)
		return (NULL);
	else
		return (strsrc);
}
