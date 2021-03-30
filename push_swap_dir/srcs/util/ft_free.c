/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 04:08:04 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/30 18:53:28 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_free_stack_ab(t_stack *stack_a, t_stack *stack_b)
{
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
}

void		ft_free_stack(t_stack *stack)
{
	free(stack->arr);
	free(stack);
}

void		ft_free_sort(t_sort *sort)
{
	free(sort->arr);
	free(sort);
}

void		ft_free_target(t_target *target)
{
	free(target);
}