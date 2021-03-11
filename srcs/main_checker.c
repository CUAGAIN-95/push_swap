/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/11 18:49:38 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_error(void)
{
	ft_putstr_fd("ERROR", 1);
	return (-1);
}

int		check_argument(char *val)
{
	int		i;

	i = 0;
	while (val[i] != '\0')
	{
		if (!ft_isspace(val[i]) && !ft_isdigit(val[i]) && !ft_issign(val[i]))
			return (0);
		if (ft_issign(val[i]) && i > 0)
			return (0);
		i++;
	}
	return (1);
}

int		init_stack(int argc, char **argv, t_stack *stack)
{
	int		ind;

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
	//t_stack		stack_b;

	if (init_stack(argc, argv, &stack_a) < 0)
		return (ft_error());
	return (0);
}