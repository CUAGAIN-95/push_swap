/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/21 20:17:46 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		*line;
	int			r;
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

	printf("\nsize : %d\n", stack_a->size);		// print test
	print_stack(stack_a, stack_b);				// print test
	
	count = 0;
	while (1)
	{
		if ((r = get_next_line(0, &line)) == -1 || r == 0)
			break;
		if ((count = parse_operation(line, stack_a, stack_b)) == 0)
		{
			ft_free_stack_ab(stack_a, stack_b);
			return (ft_print_error());
		}
		print_stack(stack_a, stack_b);			// print test
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