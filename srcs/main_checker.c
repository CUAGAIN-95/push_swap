/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/19 05:09:04 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ---------------------------------------------------------
int		parse_operation(char *line, t_stack *stack_a, t_stack *stack_b)
{
	if (!(ft_strncmp(line, "sa", ft_strlen(line) + 1)))
		operate_sab(stack_a);
	else if (!(ft_strncmp(line, "sb", ft_strlen(line) + 1)))
		operate_sab(stack_b);
	else if (!(ft_strncmp(line, "ss", ft_strlen(line) + 1)))
		operate_ss(stack_a, stack_b);
	else if (!(ft_strncmp(line, "pa", ft_strlen(line) + 1)))
		operate_pab(stack_b, stack_a);
	else if (!(ft_strncmp(line, "pb", ft_strlen(line) + 1)))
		operate_pab(stack_a, stack_b);
	else if (!(ft_strncmp(line, "ra", ft_strlen(line) + 1)))
		operate_rab(stack_a);
	else if (!(ft_strncmp(line, "rb", ft_strlen(line) + 1)))
		operate_rab(stack_b);
	else if (!(ft_strncmp(line, "rr", ft_strlen(line) + 1)))
		operate_rr(stack_a, stack_b);
	else if (!(ft_strncmp(line, "rra", ft_strlen(line) + 1)))
		operate_rrab(stack_a);
	else if (!(ft_strncmp(line, "rrb", ft_strlen(line) + 1)))
		operate_rrab(stack_b);
	else if (!(ft_strncmp(line, "rrr", ft_strlen(line) + 1)))
		operate_rrr(stack_a, stack_b);
	// else
	// {
	// 	ft_free_stack_ab(stack_a, stack_b);
	// 	return (0);
	// }
	return (1);
}

// ---------------------------------------------------------

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		*line;
	int			r;

	if (argc == 1)
		return (0);
	stack_a = (t_stack *)malloc(sizeof(t_stack));
	if (!init_stack_a(stack_a, argc, argv))
		return (ft_print_error());
	stack_b = init_stack_b(argc);
	
	printf("\nsize : %d\n", stack_a->size);		// print test
	print_stack(stack_a, stack_b);				// print test
	
	while (1)
	{
		if ((r = get_next_line(1, &line)) == -1)
			break;
		if (!parse_operation(line, stack_a, stack_b))
			return (ft_print_error());
		print_stack(stack_a, stack_b);			// print test
		free(line);
		line = NULL;
		if (r == 0)
			break;
	}
	ft_print_result(ft_checker(stack_a));
	ft_free_stack_ab(stack_a, stack_b);

	while (1)									// leaks test
		;
	
	return (0);
}