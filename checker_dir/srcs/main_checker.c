/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/01 21:15:26 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		checker(t_stack *stack_a, t_stack *stack_b, int count)
{
	char		*line;
	int			r;

	count = 0;
	while (1)
	{
		if ((r = get_next_line(0, &line)) == -1 || r == 0)
			break ;
		if ((count = parse_operation(line, stack_a, stack_b)) == 0)
		{
			ft_free_stack_ab(stack_a, stack_b);
			return (ft_print_error());
		}
		free(line);
		line = NULL;
		if (ft_checker(stack_a))
		{
			ft_print_result(OK, OK);
			ft_free_stack_ab(stack_a, stack_b);
			return (0);
		}
	}
	ft_print_result(ft_checker(stack_a), count);
	ft_free_stack_ab(stack_a, stack_b);
	return (0);
}

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			count;

	if (argc == 1)
		return (0);
	stack_a = (t_stack *)malloc(sizeof(t_stack));
	if (!init_stack_a(stack_a, argc, argv))
		return (ft_print_error());
	if (ft_checker(stack_a))
	{
		ft_print_result(OK, OK);
		ft_free_stack(stack_a);
		return (0);
	}
	stack_b = init_stack_b(stack_a);
	count = 0;
	return (checker(stack_a, stack_b, count));
}
