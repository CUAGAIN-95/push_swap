/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:53:01 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/30 18:53:33 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_push_swap(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
		operate_sab(stack_a);
	else if (stack_a->size == 3)
		sort_case_3(stack_a);
	else
	{
		if (!sort_case_500(stack_a, stack_b))
			return (KO);
	}
	return(OK);
}

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	if (argc == 1)
		return (0);
	if (!(stack_a = (t_stack *)malloc(sizeof(t_stack))))
		return (ft_print_error());
	if (!init_stack_a(stack_a, argc, argv))
		return (ft_print_error());
	if (ft_checker(stack_a))
	{
		ft_free_stack(stack_a);
		return (0);
	}
	stack_b = init_stack_b(stack_a);
	if (!ft_push_swap(stack_a, stack_b))
		return (ft_print_error());
	ft_free_stack_ab(stack_a, stack_b);
	return (0);
}