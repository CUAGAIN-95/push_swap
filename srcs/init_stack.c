/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 03:59:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/14 11:21:38 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"//////
t_stack		*init_stack_a(int argc, char **argv)
{
	t_stack	*stack;
	t_list	*temp;
	t_list *curr;
	int		content;

	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->top = 0;
	stack->head = (t_list *)malloc(sizeof(t_list));
	while (stack->top < argc - 1)
	{
		content = ft_atoi(argv[stack->top + 1]);
		printf("content : %d stack->top : %d\n", content, stack->top);			/////
		if (stack->top == 0)
		{
			stack->lst = ft_lstnew(&content);
			stack->head->next = stack->lst;
		}
		else
		{
			temp = ft_lstnew(&content);
			ft_lstadd_front(&(stack->lst), temp);
		}
		printf("lst->content : %d\n", *(int *)(stack->lst->content));
		printf(">size: %d<\n", ft_lstsize(stack->lst));
		stack->top++;
	}
	printf("print : lst\n");
	curr = stack->head->next;
	while (curr)
	{
		printf("%d\n", *(int *)(curr->content));
		printf(">%d<\n", ft_lstsize(curr));
		curr = curr->next;
	}
	return(stack);
}

t_stack		*init_stack_b(t_stack *stack)
{
	stack->top = 0;
	return (stack);
}