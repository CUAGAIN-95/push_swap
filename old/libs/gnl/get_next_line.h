/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 18:48:00 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/01 20:32:59 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define FD_SIZE        4096
# define BUFFER_SIZE    1
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <fcntl.h>
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
