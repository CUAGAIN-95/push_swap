/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:18:11 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/15 07:10:14 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operate_sab(t_stack *stack)
{
	t_list	*lst_2;
	t_list	*lst_3;

	if (stack->head == NULL || ft_lstsize(stack->head) == 1)
		return ;
	lst_2 = stack->head;
	while((lst_2->next != NULL) && (lst_2->next != stack->top))
		lst_2 = lst_2->next;
	lst_3 = stack->head;
	while((lst_3->next != NULL) && (lst_3->next != lst_2))
		lst_3 = lst_3->next;
	lst_3->next = stack->top;
	stack->top->next = lst_2;
	stack->top = lst_2;
	lst_2->next = NULL;
}

void	operate_ss(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->head == NULL || ft_lstsize(stack_a->head) == 1)
		return ;
	if (stack_b->head == NULL || ft_lstsize(stack_b->head) == 1)
		return ;
	operate_sab(stack_a);
	operate_sab(stack_a);
}

void	operate_pab(t_stack *stack_src, t_stack *stack_dest)
{
	t_list	*lst_2;

	if (stack_src->head == NULL)
		return ;
	lst_2 = stack_src->head;
	while((lst_2->next != NULL) && (lst_2->next != stack_src->top))
		lst_2 = lst_2->next;
	lst_2->next = NULL;
	if (stack_dest->head == NULL)
	{
		stack_dest->head = stack_src->top;
		stack_dest->top = stack_src->top;
	}
	else
	{
		stack_dest->top->next = stack_src->top;
		stack_dest->top = stack_src->top;
	}
	if (stack_src->top == lst_2)
		stack_src->top = NULL;
	else
		stack_src->top = lst_2;
}
