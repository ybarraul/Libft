/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:50:28 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:50:29 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*str;

	str = dest;
	while (*str != '\0')
		str++;
	while (*src != '\0')
		*str++ = *src++;
	*str = '\0';
	return (dest);
}
