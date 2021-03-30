/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:46:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/30 18:26:08 by yeonhlee         ###   ########.fr       */
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

int		find_target_int(t_stack *stack_src, t_stack *stack_dest)
{
	int		push_v;
	int		i;
	int		flag;

	push_v = stack_src->arr[stack_src->top];
	i = 0;
	flag = 0;
	while (i < stack_dest->top)
	{
		if (stack_dest->arr[i] > stack_src->arr[stack_src->top])
			flag = 1;
		if (flag == 1 && stack_dest->arr[i] < stack_src->arr[stack_src->top])
			break ;
		i++;
	}
	i--;
	if (push_v < stack_dest->min)
	{
		i = 0;
		while (stack_dest->arr[i] != stack_dest->min)
			i++;
	}
	else if (flag == 1 && i == stack_dest->top - 1 && push_v < stack_dest->arr[stack_dest->top])
		i = stack_dest->top;
	return (i);
}