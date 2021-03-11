/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 04:01:12 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 08:02:27 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*temp1;
	const unsigned char		*temp2;
	size_t					i;

	temp1 = s1;
	temp2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && temp1[i] == temp2[i])
		i++;
	return (temp1[i] - temp2[i]);
}
