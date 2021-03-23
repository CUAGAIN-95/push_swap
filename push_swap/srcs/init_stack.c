/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 03:59:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/23 21:51:05 by yeonhlee         ###   ########.fr       */
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
		(stack->arr)[i] = ft_atoi_checkint(temp[stack->size - i - 1], stack);
		if (!(stack->check_int))
			return (0);
		i++;
		stack->top++;
	}
	max_int(stack);
	min_int(stack);
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
		(stack->arr)[i] = ft_atoi_checkint(argv[stack->size - i], stack);
		if (!(stack->check_int))
			return (0);
		i++;
		stack->top++;
	}
	max_int(stack);
	min_int(stack);
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
	if (!error)
	{
		ft_free_stack(stack);
		return (0);
	}
	error = check_duplicate(stack);
	if (!error)
	{
		ft_free_stack(stack);
		return (0);
	}
	stack->ab = A;
	// sort_arr(stack);
	return (1);
}

t_stack		*init_stack_b(t_stack *stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = (t_stack *)malloc(sizeof(t_stack));
	stack_b->size = stack_a->size;
	stack_b->arr = (int *)malloc(sizeof(int) * (stack_b->size));
	stack_b->top = -1;
	i = 0;
	while (i < stack_b->size)
	{
		(stack_b->arr)[i] = 0;
		i++;
	}
	stack_b->ab = B;
	return (stack_b);
}