/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 01:34:41 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/05/07 19:44:27 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*temp1;
	const unsigned char		*temp2;

	temp1 = (unsigned char *)(dest);
	temp2 = (const unsigned char *)(src);
	if (n == 0 || dest == src)
		return (dest);
	i = 0;
	if (dest <= src)
	{
		while (i++ < n)
			*temp1++ = *temp2++;
	}
	else
	{
		i = 1;
		while (i <= n)
		{
			temp1[n - i] = temp2[n - i];
			i++;
		}
	}
	return (dest);
}
