/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:15:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/23 23:28:19 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_case_2(t_stack *stack_a)
{
	operate_sab(stack_a);
}

void	sort_case_3(t_stack *stack_a)
{
	int		*i;

	if (ft_semi_checker(stack_a))
		return ;
	i = stack_a->arr;
	if (i[0] > i [2] && i[1] < i[2])
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

void	sort_case_5(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->top != 2)
		operate_pab(stack_a, stack_b);
	sort_case_3(stack_a);
	while (stack_b-> top != -1)
	{
		if (stack_b->arr[stack_b->top] > stack_a->max)
		{
			operate_pab(stack_b, stack_a);
			operate_rab(stack_a);
		}
		else if (stack_b->arr[stack_b->top] < stack_a->min)
			operate_pab(stack_b, stack_a);
		else
			sort5_B_to_A(stack_b, stack_a);	
	}
}

void	sort_case_100(t_stack *stack_a, t_stack *stack_b)
{
	int		*sort_arr;
}

void	sort_case_500(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->check_int = 1;
	stack_b->check_int = 1;
}