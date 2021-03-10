/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 00:26:56 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/05/06 06:15:40 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
