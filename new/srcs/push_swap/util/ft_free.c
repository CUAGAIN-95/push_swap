/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 04:08:04 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/06 20:59:45 by yeonhlee         ###   ########.fr       */
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
	if (stack->arr)
		free(stack->arr);
	if (stack)
		free(stack);
}

void		ft_free_sort(t_sort *sort)
{
	if (sort->arr)
		free(sort->arr);
	if (sort)
		free(sort);
}

void		ft_free_target(t_target *target)
{
	if (target)
		free(target);
}

void		ft_free_temp(char **temp)
{
	int		i;

	i = 0;
	while (temp[i])
	{
		free(temp[i]);
		i++;
	}
	free(temp);
}
