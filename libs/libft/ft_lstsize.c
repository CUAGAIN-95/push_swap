/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 19:51:43 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 07:59:53 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int		ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*temp;

	temp = lst;
	if (temp == NULL)
		return (0);
	size = 1;
	while (temp->next != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
