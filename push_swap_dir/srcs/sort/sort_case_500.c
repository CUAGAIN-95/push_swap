/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_case_500.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:32:35 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/30 20:10:23 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_AtoB(t_stack *stack_src, t_stack *stack_dest, t_target *target)
{
	while (target->cost > 0)
	{
		if (target->dir == UP)
			operate_rab(stack_src);
		else
			operate_rrab(stack_src);
		target->cost--;
	}
	operate_pab(stack_src, stack_dest);
}

void	ft_BtoA(t_stack *stack_src, t_stack *stack_dest, t_target *target)
{
	int		target_int;

	target_int = find_target_int(stack_src, stack_dest);
	set_target(stack_dest, target, target_int, target_int);
	while (target->cost > 0)
	{
		if (target->dir == UP)
			operate_rab(stack_dest);
		else
			operate_rrab(stack_dest);
		target->cost--;
	}
	operate_pab(stack_src, stack_dest);
}

void	ft_ps(t_stack *stack_a, t_stack *stack_b, t_sort *sort, \
						t_target *target)
{
	int			start;
	int			end;

	if (stack_a->top == 2)
	{
		sort_case_3(stack_a);
		return ;
	}
	if (sort->index_count == sort->chunk_size)
	{
		sort->index_count = 0;
		sort->chunk_count++;
	}
	start = 0;
	while (start <= stack_a->top && !ft_check_chunk(stack_a, sort, start))
		start++;
	end = stack_a->top;
	while (end >= 0 && !ft_check_chunk(stack_a, sort, end))
		end--;
	set_target(stack_a, target, start, end);
	ft_AtoB(stack_a, stack_b, target);
	sort->index_count++;
	ft_ps(stack_a, stack_b, sort, target);
	ft_BtoA(stack_b, stack_a, target);
}