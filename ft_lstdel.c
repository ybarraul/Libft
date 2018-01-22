/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:03:21 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:03:23 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;
	t_list	*list;

	if (alst == NULL)
		return ;
	list = *alst;
	while (list != NULL)
	{
		tmp = list->next;
		ft_lstdelone(&list, del);
		list = tmp;
	}
	*alst = NULL;
}
