/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:18:11 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/20 15:39:01 by yeonhlee         ###   ########.fr       */
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

int		parse_operation(char *line, t_stack *stack_a, t_stack *stack_b)
{
	if (!(ft_strncmp(line, "sa", ft_strlen(line) + 1)))
		operate_sab(stack_a);
	else if (!(ft_strncmp(line, "sb", ft_strlen(line) + 1)))
		operate_sab(stack_b);
	else if (!(ft_strncmp(line, "ss", ft_strlen(line) + 1)))
		operate_ss(stack_a, stack_b);
	else if (!(ft_strncmp(line, "pa", ft_strlen(line) + 1)))
		operate_pab(stack_b, stack_a);
	else if (!(ft_strncmp(line, "pb", ft_strlen(line) + 1)))
		operate_pab(stack_a, stack_b);
	else if (!(ft_strncmp(line, "ra", ft_strlen(line) + 1)))
		operate_rab(stack_a);
	else if (!(ft_strncmp(line, "rb", ft_strlen(line) + 1)))
		operate_rab(stack_b);
	else if (!(ft_strncmp(line, "rr", ft_strlen(line) + 1)))
		operate_rr(stack_a, stack_b);
	else if (!(ft_strncmp(line, "rra", ft_strlen(line) + 1)))
		operate_rrab(stack_a);
	else if (!(ft_strncmp(line, "rrb", ft_strlen(line) + 1)))
		operate_rrab(stack_b);
	else if (!(ft_strncmp(line, "rrr", ft_strlen(line) + 1)))
		operate_rrr(stack_a, stack_b);
	else
	{
		ft_free_stack_ab(stack_a, stack_b);
		return (0);
	}
	return (1);
}