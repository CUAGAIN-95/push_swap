/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 03:59:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/25 23:01:22 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		init_argc1(t_stack *stack, char **argv)
{
	char	**temp;
	int		i;

	if (!(temp = ft_split(argv[1], ' ')))
		return (KO);
	stack->size = count_size(argv[1], ' ');
	if (!(stack->arr = (int *)malloc(sizeof(int) * (stack->size))))
		return (KO);
	stack->top = -1;
	i = KO;
	while (i < stack->size)
	{
		if (!check_argument(temp[stack->size - i - 1]))
			return (KO);
		(stack->arr)[i] = ft_atoi_checkint(temp[stack->size - i - 1], stack);
		if (!(stack->check_int))
			return (KO);
		i++;
		stack->top++;
	}
	max_int(stack);
	min_int(stack);
	return (OK);
}

int		init_argc2(t_stack *stack, int argc,char **argv)
{
	int		i;

	stack->size = argc - 1;
	if (!(stack->arr = (int *)malloc(sizeof(int) * (stack->size))))
		return (KO);
	stack->top = -1;
	i = 0;
	while (i < stack->size)
	{
		if (!check_argument(argv[stack->size - i]))
			return (KO);
		(stack->arr)[i] = ft_atoi_checkint(argv[stack->size - i], stack);
		if (!(stack->check_int))
			return (KO);
		i++;
		stack->top++;
	}
	max_int(stack);
	min_int(stack);
	return (OK);
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
		return (KO);
	}
	error = check_duplicate(stack);
	if (!error)
	{
		ft_free_stack(stack);
		return (KO);
	}
	stack->ab = A;
	// sort_arr(stack);
	return (OK);
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

t_sort		*init_sort(t_stack *stack, t_sort *sort)
{
	if (!(sort = (t_sort *)malloc(sizeof(t_sort))))
		return (KO);
	if (!(sort->arr = (int *)malloc(sizeof(int) * stack->size)))
		return (KO);
	sort->arr_size = stack->size;
	ft_sort_arr(stack, sort);
	if (sort->arr_size <= 50)
		sort->chunk_size = 10;
	else if (sort->arr_size <= 100)
		sort->chunk_size = 20;
	else
		sort->chunk_size = 47;
	sort->chunk_count = 1;
	sort->index_count = 0;
	return (sort);
}