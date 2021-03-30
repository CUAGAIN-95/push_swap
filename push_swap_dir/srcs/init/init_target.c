/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:18:21 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/26 16:49:18 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_set_dir(t_stack *stack, t_target *target)
{
	if (target->index >= stack->top / 2)
		target->dir = UP;
	else
		target->dir = DOWN;
}

void		ft_set_cost(t_stack *stack, t_target *target)
{
	target->cost = ft_cost(stack, target->index);
}

void		ft_set_index(t_stack *stack, t_target *target, int start, int end)
{
	int		start_cost;
	int		end_cost;

	start_cost = ft_cost(stack, start);
	end_cost = ft_cost(stack, end);
	if (end_cost < start_cost)
		target->index = end;
	else if (end_cost > start_cost)
		target->index = start;
	else
	{
		if (stack->arr[start] > stack->arr[end])
			target->index = start;
		else
			target->index = end;
	}
}

void		set_target(t_stack *stack, t_target *target, int start, int end)
{
	ft_set_index(stack, target, start, end);
	ft_set_cost(stack, target);
	ft_set_dir(stack, target);
	target->value = stack->arr[target->index];
	//printf("target : %d\n", stack->arr[target->index]);
}

t_target	*init_target(void)
{
	t_target	*target;

	if (!(target = (t_target *)malloc(sizeof(target))))
		return (KO);
	target->value = 0;
	target->cost = 0;
	target->dir = 0;
	target->index = 0;
	return (target);
}