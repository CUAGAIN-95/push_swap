/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_case_500.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:32:35 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/25 23:00:19 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_AtoB(t_stack *stack_a, t_stack *stack_b, int target)
{
	
}

void	ft_push_swap(t_stack *stack_a, t_stack *stack_b, t_sort *sort)
{
	int		start;
	int		end;
	int		target;

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
	target = ft_check_cost(stack_a, start, end);
	ft_AtoB(stack_a, stack_b, target);
	sort->index_count++;
	ft_push_swap(stack_a, stack_b, sort);
	operate_pab(stack_b, stack_a);
}