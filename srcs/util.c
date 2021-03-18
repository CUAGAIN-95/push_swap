/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 04:01:46 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/18 17:22:15 by yeonhlee         ###   ########.fr       */
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

void		ft_free_util(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->arr);
	free(stack_b->arr);
	free(stack_a);
	free(stack_b);
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

int		check_int(char *val)
{
	int		i;

	i = 0;
	while (val[i] != '\0' && ft_issign(val[i]))
		i++;
	if (ft_strlen(&val[i]) > 10)
		return (0);
	else if (ft_strlen(&val[i]) == 10 && val[i] != '2' && val[i] != '1')
		return (0);
	else if (ft_atoi(&val[i]) < 0)
		return (0);
	return (1);
}

int		check_argument(char *val)
{
	int		i;

	i = 0;
	while (val[i] != '\0')
	{
		if (!ft_isspace(val[i]) && !ft_isdigit(val[i]) && !ft_issign(val[i]))
			return (0);
		if (ft_issign(val[i]) && i > 0)
			return (0);
		i++;
	}
	return (1);
}