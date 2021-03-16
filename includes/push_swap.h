/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:05:49 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/16 16:33:17 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
**	# include <stddef.h>
**	# include <stdlib.h>
**	# include <unistd.h>
*/
# include "../libs/libft/libft.h"
# include "../libs/gnl/get_next_line.h"

# include <stdio.h>				/////

/*
** ==========================================================================
**  Constants
** ==========================================================================
*/

# define ERROR_MALLOC	-1
# define ERROR_ARGUMENT	-2

/*
** ==========================================================================
**  structs
** ==========================================================================
*/

typedef struct			s_stcak
{
	int		size;
	int		top;
	int		*arr;
	
	
}						t_stack;

/*
** ==========================================================================
**	ft_print.c
** ==========================================================================
*/

int						ft_print_error(void);
void					ft_print_result(int result);

/*
** ==========================================================================
**	init_stack.c
** ==========================================================================
*/

t_stack					*init_stack_a(int argc, char **argv);
t_stack					*init_stack_b(int argc);


/*
** ==========================================================================
**	util.c
** ==========================================================================
*/

int						check_argument(char *val);
int						ft_checker(t_stack *stack);


/*
** ==========================================================================
**	operate.c
** ==========================================================================
*/

void	operate_sab(t_stack *stack);
void	operate_ss(t_stack *stack_a, t_stack *stack_b);

void	operate_pab(t_stack *stack_src, t_stack *stack_dest);

void	operate_rab(t_stack *stack);
void	operate_rr(t_stack *stack_a, t_stack *stack_b);

void	operate_rrab(t_stack *stack);
void	operate_rrr(t_stack *stack_a, t_stack *stack_b);


void	print_stack(t_stack *stack_a, t_stack *stack_b);	//test
#endif