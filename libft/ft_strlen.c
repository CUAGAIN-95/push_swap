/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 04:05:07 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 08:09:44 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t		ft_strlen(const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
