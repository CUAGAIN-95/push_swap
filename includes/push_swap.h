/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:05:49 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/23 23:16:18 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
**	# include <stddef.h>
**	# include <stdlib.h>
**	# include <unistd.h>
*/

# include <stdio.h>			//////

# include "../libs/libft/libft.h"
# include "../libs/gnl/get_next_line.h"

/*
** ==========================================================================
**  Constants
** ==========================================================================
*/

# define OK			1
# define KO			0
# define A			0
# define B			1
# define AB			2

/*
** ==========================================================================
**  structs
** ==========================================================================
*/

typedef struct		s_stack
{
	int		ab;
	int		size;
	int		top;
	int		*arr;
	// int		*sort_arr;
	int		max;
	int		min;
	// int		mid;
	int		up_cost;
	int		down_cost;
	int		check_int;
}					t_stack;

/*
** ==========================================================================
**	ft_print.c
** ==========================================================================
*/

int					ft_print_error(void);
void				ft_print_result(int result, int count);

/*
** ==========================================================================
**	init_stack.c
** ==========================================================================
*/

int					init_argc1(t_stack *stack, char **argv);
int					init_argc2(t_stack *stack, int argc,char **argv);
int					init_stack_a(t_stack *stack, int argc, char **argv);
t_stack				*init_stack_b(t_stack *stack_a);

/*
** ==========================================================================
**	ft_check.c
** ==========================================================================
*/

int					ft_atoi_checkint(char *nptr, t_stack *stack);
int					check_argument(char *val);
int					check_duplicate(t_stack *stack);
int					ft_semi_checker(t_stack *stack);
int					ft_checker(t_stack *stack);

/*
** ==========================================================================
**	ft_check.c
** ==========================================================================
*/

void				ft_free_stack(t_stack *stack);
void				ft_free_stack_ab(t_stack *stack_a, t_stack *stack_b);

/*
** ==========================================================================
**	util.c
** ==========================================================================
*/

void				max_int(t_stack *stack);
void				min_int(t_stack *stack);
void				pab_cost(t_stack *stack_src, t_stack *stack_dest);
int					count_size(char *s, char c);

void				sort5_B_to_A(t_stack *stack_src, t_stack *stack_dest);

/*
** ==========================================================================
**	operate.c
** ==========================================================================
*/

void				operate_sab(t_stack *stack);
void				operate_ss(t_stack *stack_a, t_stack *stack_b);
void				operate_pab(t_stack *stack_src, t_stack *stack_dest);

void				operate_rab(t_stack *stack);
void				operate_rr(t_stack *stack_a, t_stack *stack_b);
void				operate_rrab(t_stack *stack);
void				operate_rrr(t_stack *stack_a, t_stack *stack_b);

/*
** ==========================================================================
**	sort_case.c
** ==========================================================================
*/

void				sort_case_2(t_stack *stack_a);
void				sort_case_3(t_stack *stack_a);
void				sort_case_5(t_stack *stack_a, t_stack *stack_b);
void				sort_case_100(t_stack *stack_a, t_stack *stack_b);
void				sort_case_500(t_stack *stack_a, t_stack *stack_b);

void	print_stack(t_stack *stack_a, t_stack *stack_b);	//test
#endif