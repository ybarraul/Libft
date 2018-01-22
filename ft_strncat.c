/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:54:05 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:54:07 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*str;

	str = dest;
	while (*str != '\0')
		str++;
	while (*src != '\0' && n-- > 0)
		*str++ = *src++;
	*str = '\0';
	return (dest);
}
