/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 04:01:46 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/01 21:34:10 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_swap(t_sort *sort, int i, int j)
{
	int		temp;

	temp = sort->arr[i];
	sort->arr[i] = sort->arr[j];
	sort->arr[j] = temp;
}

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

void		ft_sort_arr(t_stack *stack, t_sort *sort)
{
	int		i;
	int		j;

	i = 0;
	while (i < sort->arr_size)
	{
		sort->arr[i] = stack->arr[i];
		i++;
	}
	i = 0;
	while (i < sort->arr_size)
	{
		j = i + 1;
		while (j < sort->arr_size)
		{
			if (sort->arr[i] > sort->arr[j])
				ft_swap(sort, i, j);
			j++;
		}
		i++;
	}
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
