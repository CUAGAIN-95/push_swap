/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 04:35:06 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/26 13:48:54 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_atoi_checkint(char *nptr, t_stack *stack)
{
	long	i;
	long	result;
	int		minus;

	i = 0;
	result = 0;
	minus = 1;
	stack->check_int = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus *= -1;
		i++;
	}
	while (nptr[i] != '\0' && '0' <= nptr[i] && nptr[i] <= '9')
	{
		result = (result * 10) + (int)(nptr[i] - '0');
		i++;
	}
	if (result * minus > 2147483647 || result * minus < -2147483648)
		stack->check_int = 0;
	return ((int)(result * minus));
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

int		ft_semi_checker(t_stack *stack)
{
	int		i;
	int		temp;

	i = 0;
	temp = stack->arr[i];
	while (i < stack->top)
	{
		if (temp < stack->arr[i + 1])
			return (KO);
		temp = stack->arr[i + 1];
		i++;
	}
	return (OK);
}

int		ft_checker(t_stack *stack)
{
	int		i;
	int		temp;

	if (stack->size != stack->top + 1)
		return (KO);
	i = 0;
	temp = stack->arr[i];
	while (i < stack->top)
	{
		if (temp < stack->arr[i + 1])
			return (KO);
		temp = stack->arr[i + 1];
		i++;
	}
	return (OK);
}