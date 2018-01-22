/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:03:58 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:04:01 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *tmp))
{
	t_list		*index;
	t_list		*head;
	t_list		*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	if (!(index = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	lst = lst->next;
	head = index;
	while (lst)
	{
		tmp = f(lst);
		if (!(index->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		index = index->next;
		lst = lst->next;
	}
	return (head);
}
