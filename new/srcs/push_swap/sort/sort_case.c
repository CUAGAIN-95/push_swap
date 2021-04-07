/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:15:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/01 21:34:53 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_top(t_stack *stack, t_target *target)
{
	int			i;

	i = 0;
	while (i < stack->size && stack->arr[i] != stack->min)
		i++;
	set_target(stack, target, i, i);
	while (target->cost > 0)
	{
		if (target->dir == UP)
			operate_rab(stack);
		else
			operate_rrab(stack);
		target->cost--;
	}
}

void	sort_case_3(t_stack *stack_a)
{
	int		*i;

	if (ft_semi_checker(stack_a))
		return ;
	i = stack_a->arr;
	if (i[0] > i[2] && i[1] < i[2])
		operate_sab(stack_a);
	else if (i[0] < i[1] && i[1] < i[2])
	{
		operate_sab(stack_a);
		operate_rrab(stack_a);
	}
	else if (i[0] > i[1] && i[0] < i[2])
		operate_rab(stack_a);
	else if (i[0] < i[1] && i[2] < i[0])
	{
		operate_sab(stack_a);
		operate_rab(stack_a);
	}
	else
		operate_rrab(stack_a);
}

int		sort_case_500(t_stack *stack_a, t_stack *stack_b)
{
	t_sort		*sort;
	t_target	*target;

	if (!(sort = init_sort(stack_a)))
	{
		ft_free_sort(sort);
		return (KO);
	}
	if (!(target = init_target()))
	{
		ft_free_sort(sort);
		return (KO);
	}
	ft_ps(stack_a, stack_b, sort, target);
	move_top(stack_a, target);
	ft_free_sort(sort);
	ft_free_target(target);
	return (OK);
}
