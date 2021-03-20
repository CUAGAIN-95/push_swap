/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:15:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/20 19:26:29 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_case_2(t_stack *stack_a)
{
	operate_sab(stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	sort_case_3(t_stack *stack_a)
{
	operate_sab(stack_a);
}
void	sort_case_5(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->check_int = 1;
	stack_b->check_int = 1;
}
void	sort_case_100(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->check_int = 1;
	stack_b->check_int = 1;
}
void	sort_case_500(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->check_int = 1;
	stack_b->check_int = 1;
}