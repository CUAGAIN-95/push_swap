/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 04:35:06 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/19 04:42:52 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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
	else if (ft_atoi(&val[i]) == -2147483648)
		return (1);
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

int		check_duplicate(t_stack *stack)
{
	int		count;
	int		i;
	int		j;

	i = 0;
	while (i < stack->size)
	{
		count = 0;
		j = i;
		while (j < stack->size)
		{
			if (stack->arr[i] == stack->arr[j])
				count++;
			if (count == 2)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}