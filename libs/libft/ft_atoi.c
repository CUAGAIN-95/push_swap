/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:34:59 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/05/07 12:11:21 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int			ft_atoi(const char *nptr)
{
	long	i;
	long	result;
	int		minus;

	i = 0;
	result = 0;
	minus = 1;
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
	return ((int)(result * minus));
}
