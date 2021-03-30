/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:15:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/30 16:10:44 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_case_3(t_stack *stack_a)
{
	int		*i;

	if (ft_semi_checker(stack_a))
		return ;
	i = stack_a->arr;
	if (i[0] > i [2] && i[1] < i[2])
		operate_sab(stack_a);
	else if (i[0] < i[1] && i[1] < i[2])
	{
		operate_sab(stack_a);
		operate_rrab(stack_a);
	}
	else if (i[0] > i[1] && i[0] < i[2])
		operate_rab(stack_a);
	else if (i[0] < i[1] && i[2] < i[0])
	{
		operate_sab(stack_a);
		operate_rab(stack_a);
	}
	else
		operate_rrab(stack_a);
}

int		sort_case_500(t_stack *stack_a, t_stack *stack_b)
{
	t_sort		*sort;
	t_target	*target;
	int			i;

	if (!(sort = init_sort(stack_a)))
	{
		ft_free_sort(sort);
		return (KO);
	}
	if (!(target = init_target()))
	{
		ft_free_sort(sort);
		return (KO);
	}
	ft_ps(stack_a, stack_b, sort, target);
	//오름차순이 될 때 까지 이동
	
	i = 0;
	while (i < stack_a->size && stack_a->arr[i] != stack_a->min)
		i++;
	set_target(stack_a, target, i, i);
	while (target->cost > 0)
	{
		if (target->dir == UP)
			operate_rab(stack_a);
		else
			operate_rrab(stack_a);
		target->cost--;
	}

	
	ft_free_sort(sort);
	ft_free_target(target);
	return (OK);
}