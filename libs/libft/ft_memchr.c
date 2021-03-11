/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 04:00:45 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 08:02:13 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char	*temp;
	size_t				i;

	temp = src;
	i = 0;
	while (i < n)
	{
		if (temp[i] == (const unsigned char)(c))
			return ((void *)(&temp[i]));
		i++;
	}
	return (NULL);
}
