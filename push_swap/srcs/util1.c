/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 04:01:46 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/23 23:04:20 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void		max_int(t_stack *stack)
{
	int		max;
	int		i;

	max = stack->arr[0];
	i = 0;
	while (i <= stack->top)
	{
		if (max < stack->arr[i])
			max = stack->arr[i];
		i++;
	}
	stack->max = max;
}

void		min_int(t_stack *stack)
{
	int		min;
	int		i;

	min = stack->arr[0];
	i = 0;
	while (i <= stack->top)
	{
		if (min > stack->arr[i])
			min = stack->arr[i];
		i++;
	}
	stack->min = min;
}

// void		mid_int(t_stack *stack)
// {
	
// }

void		pab_cost(t_stack *stack_src, t_stack *stack_dest)
{

	int		i;
	int		push_v;

	stack_src->up_cost = 0;
	stack_src->down_cost = 0;
	push_v = stack_src->arr[stack_src->top];
	i = stack_dest->top;
	while (push_v > stack_dest->arr[i])
	{
		stack_src->up_cost++;
		i--;
	}
	stack_src->down_cost = i + 1;
}

int			count_size(char *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			i++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			i++;
	}
	return (count);
}
