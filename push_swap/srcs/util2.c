/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:46:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/23 23:15:39 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void		sort100(t_stack *stack_a, t_stack *stack_b)
{
	
}