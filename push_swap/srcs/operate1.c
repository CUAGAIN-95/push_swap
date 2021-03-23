/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:18:11 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/22 18:35:54 by yeonhlee         ###   ########.fr       */
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
	if (stack->ab == A)
		ft_putstr_fd("sa\n", 1);
	else if (stack->ab == B)
		ft_putstr_fd("sb\n", 1);
}

void	operate_ss(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->ab = AB;
	stack_b->ab = AB;
	operate_sab(stack_a);
	operate_sab(stack_b);
	ft_putstr_fd("ss\n", 1);
	stack_a->ab = A;
	stack_b->ab = B;
}

void	operate_pab(t_stack *stack_src, t_stack *stack_dest)
{
	if (stack_src->top == -1)
		return ;
	stack_dest->arr[stack_dest->top + 1] = stack_src->arr[stack_src->top];
	stack_src->arr[stack_src->top] = 0;
	stack_src->top--;
	stack_dest->top++;
	if (stack_dest->ab == 0)
		ft_putstr_fd("pa\n", 1);
	else if (stack_dest->ab == 1)
		ft_putstr_fd("pb\n", 1);
	max_int(stack_src);
	min_int(stack_src);
	max_int(stack_dest);
	min_int(stack_dest);
}