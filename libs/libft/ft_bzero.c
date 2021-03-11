/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 19:43:14 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 07:56:44 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void				ft_bzero(void *str, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
