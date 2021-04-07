/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 04:02:45 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/05/07 10:28:39 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*temp_dest;
	unsigned char			*temp_src;
	size_t					i;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}
