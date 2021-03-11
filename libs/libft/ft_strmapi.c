/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 16:27:47 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/05 08:09:57 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*temp;

	len = ft_strlen(s);
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		temp[i] = (*f)(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
