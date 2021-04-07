/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:46:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/01 21:29:34 by yeonhlee         ###   ########.fr       */
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

int		find_target_int(t_stack *srcs, t_stack *dest)
{
	int		v;
	int		i;
	int		flag;

	v = srcs->arr[srcs->top];
	i = 0;
	flag = 0;
	while (i < dest->top)
	{
		if (dest->arr[i] > srcs->arr[srcs->top])
			flag = 1;
		if (flag == 1 && dest->arr[i] < srcs->arr[srcs->top])
			break ;
		i++;
	}
	i--;
	if (v < dest->min)
	{
		i = 0;
		while (dest->arr[i] != dest->min)
			i++;
	}
	else if (flag == 1 && i == dest->top - 1 && v < dest->arr[dest->top])
		i = dest->top;
	return (i);
}
