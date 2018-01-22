/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:54:39 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:54:41 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	char *s2;

	s2 = dest;
	while (len > 0 && *src != '\0')
	{
		*dest++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*dest++ = '\0';
		len--;
	}
	return (s2);
}
