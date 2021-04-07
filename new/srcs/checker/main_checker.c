/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/06 21:10:17 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		checker(t_stack *stack_a, t_stack *stack_b)
{
	char		*line;
	int			r;
	int			count;

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
	}
	ft_print_result(ft_checker(stack_a));
	ft_free_stack_ab(stack_a, stack_b);
	return (0);
}

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	if (argc == 1)
		return (0);
	if (!(stack_a = (t_stack *)malloc(sizeof(t_stack))))
		return (ft_print_error());
	if (!init_stack_a(stack_a, argc, argv))
		return (ft_print_error());
	if (!(stack_b = (t_stack *)malloc(sizeof(t_stack))))
		return (ft_print_error());
	if (!init_stack_b(stack_a, stack_b))
		return (ft_print_error());
	return (checker(stack_a, stack_b));
}
