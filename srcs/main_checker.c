/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/11 21:47:55 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// ---------------------------------------------------------
int		ft_error(void)
{
	ft_putstr_fd("ERROR", 1);
	return (-1);
}
// ---------------------------------------------------------
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
// ---------------------------------------------------------
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
// ---------------------------------------------------------
void	parse_operation(char *line, t_stack stack_a, t_stack stack_b)
{
	
}
// ---------------------------------------------------------

# include <stdio.h>								/////

int		main(int argc, char **argv)
{
	t_stack		stack_a;
	t_stack		stack_b;
	char		*line;
	int			r;

	if (init_stack_a(argc, argv, &stack_a) < 0)
		return (ft_error());
	if (init_stack_b(&stack_b, stack_a.size) < 0)
		return (ft_error());
	while (1)
	{
		if ((r = get_next_line(1, &line)) == -1)
			break;
		printf(">%s<\n", line);					////
		parse_operation(line, &stack_a, &stack_b);
		free(line);
		line = NULL;
		if (r == 0)
			break;
	}
	return (0);
}