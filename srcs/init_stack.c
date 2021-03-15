/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 03:59:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/14 16:43:24 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*init_stack_a(int argc, char **argv)
{
	t_stack	*stack;
	t_list	*new_node;
	int		*content;
	int		i;

	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->head = NULL;
	i = 1;
	while (i < argc)
	{
		content = (int *)malloc(sizeof(int));
		*content = ft_atoi(argv[i]);
		new_node = ft_lstnew(content);
		if (!(stack->head))
		{
			stack->head = new_node;
			stack->top = new_node;
		}
		else
			ft_lstadd_front(&(stack->head), new_node);
		++i;
	}
	return (stack);
}

t_stack		*init_stack_b(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->top = NULL;
	stack->head = NULL;
	return (stack);
}