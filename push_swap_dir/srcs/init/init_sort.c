/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:18:02 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/01 21:19:01 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_sort		*init_sort(t_stack *stack)
{
	t_sort	*sort;

	if (!(sort = (t_sort *)malloc(sizeof(t_sort))))
		return (KO);
	if (!(sort->arr = (int *)malloc(sizeof(int) * stack->size)))
		return (KO);
	sort->arr_size = stack->size;
	ft_sort_arr(stack, sort);
	if (sort->arr_size <= 50)
		sort->chunk_size = 10;
	else if (sort->arr_size <= 100)
		sort->chunk_size = 20;
	else
		sort->chunk_size = 46;
	sort->chunk_count = 1;
	sort->index_count = 0;
	return (sort);
}
