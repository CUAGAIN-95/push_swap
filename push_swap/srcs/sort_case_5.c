/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_case_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:28:17 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/25 19:34:07 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		pab_cost(t_stack *stack_src, t_stack *stack_dest)
{

	int		i;
	int		push_v;

	stack_src->up_cost = 0;
	stack_src->down_cost = 0;
	push_v = stack_src->arr[stack_src->top];
	i = stack_dest->top;
	while (push_v > stack_dest->arr[i])
	{
		stack_src->up_cost++;
		i--;
	}
	stack_src->down_cost = i + 1;
}

void		sort5_B_to_A(t_stack *stack_src, t_stack *stack_dest)
{
	pab_cost(stack_src, stack_dest);
	if (stack_src->up_cost >= stack_src->down_cost)
	{
		while (stack_src->down_cost-- > 0)
			operate_rrab(stack_dest);
		operate_pab(stack_src, stack_dest);
		while (stack_dest->arr[stack_dest->top] != stack_dest->min)
			operate_rab(stack_dest);
	}
	else
	{
		while (stack_src->up_cost-- > 0)
			operate_rab(stack_dest);
		operate_pab(stack_src, stack_dest);
		while (stack_dest->arr[stack_dest->top] != stack_dest->min)
			operate_rrab(stack_dest);
	}
}