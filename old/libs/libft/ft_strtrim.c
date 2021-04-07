/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:16:39 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 08:11:35 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	count_memsize(char const *s1, char const *set, int *i)
{
	size_t	ind1;
	size_t	ind2;

	ind1 = 0;
	while (ind1 < ft_strlen(s1) && ft_strchr(set, s1[ind1]))
		ind1++;
	ind2 = ft_strlen(s1);
	while (ind2 > ind1 && ft_strchr(set, s1[ind2]))
		ind2--;
	i[0] = ind1;
	i[1] = ind2;
	i[2] = ind2 - ind1 + 1;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i[3];
	int		ind;
	char	*dest;

	ind = 0;
	count_memsize(s1, set, i);
	if (!(dest = (char *)malloc(sizeof(char) * (i[2] + 1))))
		return (0);
	ind = 0;
	while (i[0] + ind <= i[1])
	{
		dest[ind] = s1[i[0] + ind];
		ind++;
	}
	dest[ind] = '\0';
	return (dest);
}
