/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 03:59:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/12 04:00:52 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		init_stack_a(int argc, char **argv, t_stack *stack)
{
	int		ind;

	stack->top = -1;
	stack->size = argc - 1;
	if (!(stack->values = ft_calloc(stack->size, sizeof(int))))
		return (ERROR_MALLOC);
	ind = 0;
	while (ind < stack->size)
	{
		if (!check_argument(argv[ind + 1]))
			return (ERROR_ARGUMENT);
		(stack->values)[ind] = ft_atoi(argv[ind + 1]);
		ind++;
		stack->top++;
	}
	return (1);
}

int		init_stack_b(t_stack *stack, int size)
{
	stack->top = -1;
	stack->size = size;
	if (!(stack->values = ft_calloc(size, sizeof(int))))
		return (ERROR_MALLOC);
	return (1);
}