/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 01:48:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 08:10:29 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	ch1;
	unsigned char	ch2;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	ch1 = (unsigned char)(s1[i]);
	ch2 = (unsigned char)(s2[i]);
	return (ch1 - ch2);
}
