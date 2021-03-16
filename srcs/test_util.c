/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:50:00 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/16 14:55:55 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	print_stack(t_stack *stack_a, t_stack *stack_b)
{
	int		i;

	i = 0;
	printf("\nstack_a : ");
	while (i < stack_a->size)
	{
		printf("|%d| ", stack_a->arr[i]);
		i++;
	}
	printf(" top > |%d|", stack_a->top);
	printf("\nstack_b : ");
	i = 0;
	while (i < stack_b->size)
	{
		printf("|%d| ", stack_b->arr[i]);
		i++;
	}
	printf(" top > |%d|", stack_b->top);
	printf("\n");
}