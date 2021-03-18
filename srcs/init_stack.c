/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 03:59:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/19 05:04:44 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		init_argc1(t_stack *stack, char **argv)
{
	char	**temp;
	int		i;

	if (!(temp = ft_split(argv[1], ' ')))
		return (0);
	stack->size = count_size(argv[1], ' ');
	if (!(stack->arr = (int *)malloc(sizeof(int) * (stack->size))))
		return (0);
	stack->top = -1;
	i = 0;
	while (i < stack->size)
	{
		if (!check_argument(temp[stack->size - i - 1]))
			return (0);
		if (!check_int(temp[stack->size - i - 1]))
			return (0);
		(stack->arr)[i] = ft_atoi(temp[stack->size - i - 1]);
		i++;
		stack->top++;
	}
	return (1);
}

int		init_argc2(t_stack *stack, int argc,char **argv)
{
	int		i;

	stack->size = argc - 1;
	if (!(stack->arr = (int *)malloc(sizeof(int) * (stack->size))))
		return (0);
	stack->top = -1;
	i = 0;
	while (i < stack->size)
	{
		if (!check_argument(argv[stack->size - i]))
			return (0);
		if (!check_int(argv[stack->size - i]))
			return (0);
		(stack->arr)[i] = ft_atoi(argv[stack->size - i]);
		i++;
		stack->top++;
	}
	return (1);
}

int		init_stack_a(t_stack *stack, int argc, char **argv)
{	
	int		error;

	error = 1;
	if (argc == 2)
		error = init_argc1(stack, argv);
	else
		error = init_argc2(stack, argc, argv);
	error = check_duplicate(stack);
	if (!error)
	{
		ft_free_stack(stack);
		return (0);
	}
	return (1);
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
	while (i < stack->size)
	{
		(stack->arr)[i] = 0;
		i++;
	}
	return (stack);
}