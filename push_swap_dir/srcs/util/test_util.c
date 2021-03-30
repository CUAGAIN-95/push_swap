/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:50:00 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/23 16:27:26 by yeonhlee         ###   ########.fr       */
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
	printf(" top > |%d| min > |%d| max > |%d|", stack_a->top, stack_a->min, stack_a->max);
	printf(" up_cost > |%d| down_cost > |%d|", stack_a->up_cost, stack_a->down_cost);
	printf("\nstack_b : ");
	i = 0;
	while (i < stack_b->size)
	{
		printf("|%d| ", stack_b->arr[i]);
		i++;
	}
	printf(" top > |%d| min > |%d| max > |%d|", stack_b->top, stack_b->min, stack_b->max);
	printf(" up_cost > |%d| down_cost > |%d|", stack_b->up_cost, stack_b->down_cost);
	printf("\n");
}