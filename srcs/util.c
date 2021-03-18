/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 04:01:46 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/19 05:00:15 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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

void		ft_free_stack_ab(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->arr);
	free(stack_a);
	free(stack_b->arr);
	free(stack_b);
}

void		ft_free_stack(t_stack *stack)
{
	free(stack->arr);
	free(stack);
}

int		ft_checker(t_stack *stack)
{
	int		i;
	int		temp;

	if (stack->size != stack->top + 1)
		return (0);
	i = 0;
	temp = stack->arr[i];
	while (i < stack->top)
	{
		if (temp < stack->arr[i + 1])
			return (0);
		temp = stack->arr[i + 1];
		i++;
	}
	return (1);
}