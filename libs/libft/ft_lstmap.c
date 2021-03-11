/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 23:40:34 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 10:02:16 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*first;

	if (!lst)
		return (0);
	if (!(temp = ft_lstnew((*f)(lst->content))))
		return (0);
	first = temp;
	while (lst)
	{
		if (lst->next)
		{
			if (!(temp->next = ft_lstnew((*f)(lst->next->content))))
			{
				ft_lstclear(&first, (*del));
				return (0);
			}
			temp = temp->next;
		}
		lst = lst->next;
	}
	temp->next = NULL;
	return (first);
}
