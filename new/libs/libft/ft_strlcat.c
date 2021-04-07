/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 00:13:55 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 08:09:28 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = ft_strlen(dest);
	if (i > size)
		return (ft_strlen(src) + size);
	while (size > i + j + 1 && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(src) + i);
}
