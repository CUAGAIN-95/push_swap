/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 04:00:25 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/05/07 10:49:09 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*temp_dest;
	const unsigned char		*temp_src;
	size_t					i;

	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		if (temp_dest[i] == (unsigned char)(c))
			return ((void *)(&temp_dest[i + 1]));
		i++;
	}
	return (NULL);
}
