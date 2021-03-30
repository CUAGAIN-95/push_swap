/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 03:50:40 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/28 17:47:33 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_print_error(void)
{
	ft_putstr_fd("Error\n", 1);
	return (-1);
}

void	ft_print_result(int result, int count)
{
	if (count == 0)
		ft_print_error();
	else if (result == 1)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	return ;
}