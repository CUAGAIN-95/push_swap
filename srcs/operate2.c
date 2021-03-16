/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:18:14 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/16 16:01:57 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operate_rab(t_stack *stack)
{
	int		temp1;
	int		temp2;
	int		i;

	if (stack->top == -1 || stack->top == 0)
		return ;
	i = 0;
	temp1 = stack->arr[i];
	stack->arr[i] = stack->arr[stack->top];
	while (i < stack->top)
	{
		temp2 = stack->arr[i + 1];
		stack->arr[i + 1] = temp1;
		temp1 = temp2;
		i++;
	}
}

void	operate_rr(t_stack *stack_a, t_stack *stack_b)
{
	operate_rab(stack_a);
	operate_rab(stack_b);
}

void	operate_rrab(t_stack *stack)
{
	int		temp1;
	int		temp2;
	int		i;

	if (stack->top == -1 || stack->top == 0)
		return ;
	i = stack->top;
	temp1 = stack->arr[i];
	stack->arr[i] = stack->arr[0];
	while (i > 0)
	{
		temp2 = stack->arr[i - 1];
		stack->arr[i - 1] = temp1;
		temp1 = temp2;
		i--;
	}
}
void	operate_rrr(t_stack *stack_a, t_stack *stack_b)
{
	operate_rrab(stack_a);
	operate_rrab(stack_b);
}