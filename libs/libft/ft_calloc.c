/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 00:44:11 by yeonhlee          #+#    #+#             */
/*   Updated: 2020/05/07 16:49:36 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void			*ft_calloc(size_t nmemb, size_t size)
{
	void		*result;

	if (!(result = (void *)malloc((size) * (nmemb))))
		return (NULL);
	ft_memset(result, 0, size * nmemb);
	return (result);
}
