/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:18:14 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/14 16:43:05 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operate_rab(t_stack *stack)
{
	printf("OK >content : %d<\n", *(int *)(stack->head->content));
}

void	operate_rr(t_stack *stack_a, t_stack *stack_b)
{
	printf("OK >content : %d<\n", *(int *)(stack_a->head->content));
	printf("OK >content : %d<\n", *(int *)(stack_b->head->content));
}

void	operate_rrab(t_stack *stack)
{
	printf("OK >content : %d<\n", *(int *)(stack->head->content));
}
void	operate_rrr(t_stack *stack_a, t_stack *stack_b)
{
	printf("OK >content : %d<\n", *(int *)(stack_a->head->content));
	printf("OK >content : %d<\n", *(int *)(stack_b->head->content));
}