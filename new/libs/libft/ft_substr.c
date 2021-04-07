/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 06:25:43 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/12 18:00:51 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ind;
	char	*temp;

	if (ft_strlen(s) < start)
	{
		if (!(temp = (char *)malloc(sizeof(char) * 1)))
			return (0);
		temp[0] = '\0';
		return (temp);
	}
	ind = 0;
	while (ind < len && s[start + ind] != '\0')
		ind++;
	if (!(temp = (char *)malloc(sizeof(char) * (ind + 1))))
		return (0);
	ind = 0;
	while (ind < len && s[start + ind] != '\0')
	{
		temp[ind] = s[start + ind];
		ind++;
	}
	temp[ind] = '\0';
	return (temp);
}
