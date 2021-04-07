/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:18:14 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/01 21:21:04 by yeonhlee         ###   ########.fr       */
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
	if (stack->ab == A)
		ft_putstr_fd("ra\n", 1);
	else if (stack->ab == B)
		ft_putstr_fd("rb\n", 1);
}

void	operate_rr(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->ab = AB;
	stack_b->ab = AB;
	operate_rab(stack_a);
	operate_rab(stack_b);
	ft_putstr_fd("rr\n", 1);
	stack_a->ab = A;
	stack_b->ab = B;
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
	if (stack->ab == A)
		ft_putstr_fd("rra\n", 1);
	else if (stack->ab == B)
		ft_putstr_fd("rrb\n", 1);
}

void	operate_rrr(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->ab = AB;
	stack_b->ab = AB;
	operate_rrab(stack_a);
	operate_rrab(stack_b);
	ft_putstr_fd("rrr\n", 1);
	stack_a->ab = A;
	stack_b->ab = B;
}
