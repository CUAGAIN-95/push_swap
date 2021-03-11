/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 18:48:51 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/11 19:32:49 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strnew(int size)
{
	char	*s;
	int		i;

	i = 0;
	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i < size)
		s[i++] = 0;
	s[size] = '\0';
	return (s);
}

void	ft_strdel(char **s)
{
	if (*s)
	{
		free(*s);
		*s = 0;
	}
}

int		appendline(int fd, char **line, char **s, int len)
{
	char	*temp;

	*line = ft_substr(s[fd], 0, len);
	temp = ft_strdup(&s[fd][len + 1]);
	free(s[fd]);
	s[fd] = temp;
	if (s[fd][0] == '\0')
		ft_strdel(&s[fd]);
	return (1);
}

int		output(int fd, char **line, int ret, char **s)
{
	int		len;

	len = 0;
	while ((s[fd][len] != '\0') && (s[fd][len] != '\n'))
		len++;
	if (ret < 0)
		return (-1);
	else if (s[fd][len] == '\n')
		return (appendline(fd, line, s, len));
	else
	{
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
		return (0);
	}
}

int		get_next_line(int fd, char **line)
{
	int			ret;
	char		*temp;
	char		buff[BUFFER_SIZE + 1];
	static char	*s[FD_SIZE];

	if (fd < 0 || line == 0 || BUFFER_SIZE <= 0)
		return (-1);
	while ((ret = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		temp = ft_strjoin(s[fd], buff);
		free(s[fd]);
		s[fd] = temp;
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	if (s[fd] == 0)
	{
		if (!(s[fd] = (char*)malloc(sizeof(char) * 1)))
			return (-1);
		*s[fd] = '\0';
	}
	return (output(fd, line, ret, s));
}
