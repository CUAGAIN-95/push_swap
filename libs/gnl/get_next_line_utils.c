/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 04:34:08 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/11 19:32:36 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char		*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = ft_strlen(s);
	if (!(dest = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strchr(const char *s, int c)
{
	char	*temp;
	int		i;

	temp = (char *)s;
	i = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] == c)
			return (&temp[i]);
		i++;
	}
	if (c == '\0')
		return (&temp[i]);
	return (0);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ind;
	char	*temp;

	if (ft_strlen(s) < start)
		return (0);
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
