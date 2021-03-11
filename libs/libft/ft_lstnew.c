/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 19:24:08 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 07:59:46 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list) * 1)))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
