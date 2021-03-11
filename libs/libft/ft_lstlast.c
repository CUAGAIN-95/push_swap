/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 20:02:02 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/05/07 17:00:30 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list		*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst == 0)
		return (lst);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
