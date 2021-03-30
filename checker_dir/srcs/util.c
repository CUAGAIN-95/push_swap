/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 04:01:46 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/21 20:18:06 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "checker.h"

int			count_size(char *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			i++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			i++;
	}
	return (count);
}

void		ft_free_stack_ab(t_stack *stack_a, t_stack *stack_b)
{
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
}

void		ft_free_stack(t_stack *stack)
{
	free(stack->arr);
	free(stack);
}