/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:46:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/26 19:18:11 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_cost(t_stack *stack, int index)
{
	int		cost;

	if (index >= stack->top / 2)
		cost = stack->top - index;
	else
		cost = index + 1;
	return (cost);
}

int		ft_check_chunk(t_stack *stack, t_sort *sort, int index)
{
	int		i;
	int		j;

	if (sort->chunk_count * sort->chunk_size >= sort->arr_size - 3)
		i = sort->arr_size - 3;
	else
		i = sort->chunk_count * sort->chunk_size;
	j = (sort->chunk_count - 1) * sort->chunk_size;
	while (j < i)
	{
		if (stack->arr[index] == sort->arr[j])
			return (OK);
		j++;
	}
	return (KO);
}