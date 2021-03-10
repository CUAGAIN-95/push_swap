/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/10 23:05:36 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_error(void)
{
	ft_putstr_fd("ERROR", 1);
	return (-1);
}

int		init_stack(int argc, char **argv, t_stack *stack)
{
	int		ind;
	int		value;

	stack->top = -1;
	stack->size = argc - 1;
	if (!(stack->values = (int *)malloc(sizeof(int) * (stack->size))))
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

int		main(int argc, char **argv)
{
	t_stack		stack_a;
	t_stack		stack_b;
	int			error;

	if (init_stack(argc, argv, &stack_a) < 0)
		return (ft_error());
	
	return (0);
}