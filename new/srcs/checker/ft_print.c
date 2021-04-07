/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 03:50:40 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/06 20:44:03 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (-1);
}

void	ft_print_result(int result)
{
	if (result == 1)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	return ;
}
