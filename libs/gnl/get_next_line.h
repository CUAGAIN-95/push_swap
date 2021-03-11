/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 18:48:00 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/11 19:53:15 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define FD_SIZE		4096
# define BUFFER_SIZE	1
# include <fcntl.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

char		*ft_strnew(int size);
void		ft_strdel(char **as);
int			appendline(int fd, char **line, char **s, int len);
int			output(int fd, char **line, int ret, char **s);
int			get_next_line(int fd, char **line);

size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
#endif
