/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 07:32:29 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 08:09:20 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	int		j;
	char	*dest;

	len = 0;
	if (!s1 && !s2)
		return (0);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(dest = (char *)malloc(sizeof(char) * len)))
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
