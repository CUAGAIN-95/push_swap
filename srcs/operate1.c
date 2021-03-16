/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:18:11 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/16 16:00:09 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operate_sab(t_stack *stack)
{
	int		temp;

	if (stack->top == -1 || stack->top == 0)
		return ;
	temp = stack->arr[stack->top];
	stack->arr[stack->top] = stack->arr[stack->top - 1];
	stack->arr[stack->top - 1] = temp;
}

void	operate_ss(t_stack *stack_a, t_stack *stack_b)
{
	operate_sab(stack_a);
	operate_sab(stack_b);
}

void	operate_pab(t_stack *stack_src, t_stack *stack_dest)
{
	if (stack_src->top == -1)
		return ;
	stack_dest->arr[stack_dest->top + 1] = stack_src->arr[stack_src->top];
	stack_src->arr[stack_src->top] = 0;
	stack_src->top--;
	stack_dest->top++;
}
