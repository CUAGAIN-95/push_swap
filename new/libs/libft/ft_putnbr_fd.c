/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 18:19:28 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/05/07 16:49:57 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		num_print(int n, int fd)
{
	int		i;
	char	c;

	i = n % 10;
	if (n >= 10 || n <= -10)
		num_print(n / 10, fd);
	if (i < 0)
		i *= -1;
	c = (char)(i + '0');
	write(fd, &c, 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		i;

	i = 0;
	if (n < 0)
		write(fd, "-", 1);
	num_print(n, fd);
}
