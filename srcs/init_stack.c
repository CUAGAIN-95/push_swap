/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 03:59:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/16 15:07:58 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*init_stack_a(int argc, char **argv)
{
	t_stack	*stack;
	int		i;

	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->size = argc - 1;
	stack->arr = (int *)malloc(sizeof(int) * (stack->size));
	stack->top = -1;
	
	i = 0;
	while (i < stack->size)
	{
		(stack->arr)[i] = ft_atoi(argv[stack->size - i]);
		i++;
		stack->top++;
	}
	return (stack);
}

t_stack		*init_stack_b(int argc)
{
	t_stack	*stack;
	int		i;

	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->size = argc - 1;
	stack->arr = (int *)malloc(sizeof(int) * (stack->size));
	stack->top = -1;
	i = 0;
	while (i < argc)
	{
		(stack->arr)[i] = 0;
		i++;
	}
	return (stack);
}