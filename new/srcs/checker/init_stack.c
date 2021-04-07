/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 03:59:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/06 21:03:28 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int			init_argc1(t_stack *stack, char **argv)
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
	ft_free_temp(temp);
	return (1);
}

int			init_argc2(t_stack *stack, int argc, char **argv)
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
	return (1);
}

int			init_stack_a(t_stack *stack, int argc, char **argv)
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
		return (error);
	}
	error = check_duplicate(stack);
	if (!error)
	{
		ft_free_stack(stack);
		return (error);
	}
	return (error);
}

int			init_stack_b(t_stack *stack_a, t_stack *stack_b)
{
	int		i;

	stack_b->size = stack_a->size;
	if (!(stack_b->arr = (int *)malloc(sizeof(int) * (stack_b->size))))
	{
		ft_free_stack_ab(stack_a, stack_b);
		return (KO);
	}
	stack_b->top = -1;
	i = 0;
	while (i < stack_b->size)
	{
		(stack_b->arr)[i] = 0;
		i++;
	}
	return (OK);
}
