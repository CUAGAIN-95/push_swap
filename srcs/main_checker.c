/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/12 04:11:17 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>								/////
#include "push_swap.h"

// ---------------------------------------------------------
void	parse_operation(char *line, t_stack *stack_a, t_stack *stack_b)
{
	if (!(ft_strncmp(line, "sa", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else if (!(ft_strncmp(line, "sb", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
		else if (!(ft_strncmp(line, "ss", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else if (!(ft_strncmp(line, "pa", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else if (!(ft_strncmp(line, "pb", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else if (!(ft_strncmp(line, "ra", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else if (!(ft_strncmp(line, "rb", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else if (!(ft_strncmp(line, "rr", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else if (!(ft_strncmp(line, "rra", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else if (!(ft_strncmp(line, "rrb", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else if (!(ft_strncmp(line, "rrb", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else if (!(ft_strncmp(line, "rrr", ft_strlen(line) + 1)))
		printf("%s : OK\n", line);
	else
		printf("%s : KO\n", line);
	
	stack_a->size++;
	stack_a->size--;
	stack_b->size++;
	stack_b->size--;
}

// ---------------------------------------------------------

int		main(int argc, char **argv)
{
	t_stack		stack_a;
	t_stack		stack_b;
	char		*line;
	int			r;

	if (argc == 1)
		return (ERROR_ARGUMENT);
	if (init_stack_a(argc, argv, &stack_a) < 0)
		return (ft_error());
	if (init_stack_b(&stack_b, stack_a.size) < 0)
		return (ft_error());
	while (1)
	{
		if ((r = get_next_line(1, &line)) == -1)
			break;
		parse_operation(line, &stack_a, &stack_b);
		free(line);
		line = NULL;
		if (r == 0)
			break;
	}
	return (0);
}