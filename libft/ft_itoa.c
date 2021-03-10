/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 14:08:09 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 07:57:15 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int		count_digit(int n)
{
	int		count;
	int		div;

	count = 0;
	div = n;
	if (div < 0)
		count++;
	while (div != 0)
	{
		div /= 10;
		if (div != 0)
			count++;
	}
	count++;
	return (count);
}

long	set_minus(char *result, long nb)
{
	result[0] = '-';
	nb = nb * -1;
	return (nb);
}

char	*ft_itoa(int n)
{
	int		digits;
	long	nb;
	char	*result;

	digits = count_digit(n);
	if (!(result = (char *)malloc(sizeof(char) * (digits + 1))))
		return (0);
	result[digits--] = '\0';
	nb = n;
	if (nb == 0)
	{
		result[digits] = '0';
		return (result);
	}
	if (nb < 0)
		nb = set_minus(result, nb);
	while (nb > 0)
	{
		result[digits] = (char)('0' + nb % 10);
		nb = nb / 10;
		digits--;
	}
	return (result);
}
