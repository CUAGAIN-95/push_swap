/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/16 16:33:04 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ---------------------------------------------------------
void	parse_operation(char *line, t_stack *stack_a, t_stack *stack_b)
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
}

// ---------------------------------------------------------

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		*line;
	int			r;

	if (argc == 1)
		return (ft_print_error());
	stack_a = init_stack_a(argc, argv);
	stack_b = init_stack_b(argc);
	
	printf("\nsize : %d\n", stack_a->size);		////
	print_stack(stack_a, stack_b);				////
	
	while (1)
	{
		if ((r = get_next_line(1, &line)) == -1)
			break;
		parse_operation(line, stack_a, stack_b);
		print_stack(stack_a, stack_b);			////
		free(line);
		line = NULL;
		if (r == 0)
			break;
	}
	ft_print_result(ft_checker(stack_a));
	return (0);
}