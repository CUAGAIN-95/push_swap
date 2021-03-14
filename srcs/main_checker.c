/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:48:58 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/14 11:16:27 by yeonhlee         ###   ########.fr       */
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
	
	stack_a->top++;
	stack_a->top--;
	stack_b->top++;
	stack_b->top--;
}

// ---------------------------------------------------------

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
	// t_stack		*stack_b;
	// char		*line;
	// int			r;

	if (argc == 1)
		return (ERROR_ARGUMENT);
	stack_a = init_stack_a(argc, argv);
	// stack_b = (t_stack *)malloc(sizeof(t_stack) * 1);
	// init_test(argc, argv, stack_b);
	// init_stack_b(stack_b);
	// while (1)
	// {
	// 	if ((r = get_next_line(1, &line)) == -1)
	// 		break;
	// 	parse_operation(line, stack_a, stack_b);
	// 	free(line);
	// 	line = NULL;
	// 	if (r == 0)
	// 		break;
	// }

	
	// printf("print : lst\n");
	// while (stack_a->lst)
	// {
	// 	printf("%d\n", *(int *)(stack_a->lst->content));
	// 	stack_a->lst = (stack_a->lst)->next;
	// }
	return (0);
}