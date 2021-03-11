/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 04:04:19 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/04/04 19:55:45 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
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
