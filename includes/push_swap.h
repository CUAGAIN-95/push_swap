/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:05:49 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/04/01 21:38:49 by yeonhlee         ###   ########.fr       */
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

# define UP			1
# define DOWN		0

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
	int		max;
	int		min;
	int		up_cost;
	int		down_cost;
	int		check_int;
}					t_stack;

typedef struct		s_sort
{
	int		*arr;
	int		arr_size;
	int		chunk_size;
	int		chunk_count;
	int		index_count;
}					t_sort;

typedef struct		s_target
{
	int		value;
	int		index;
	int		dir;
	int		cost;
}					t_target;

/*
** ==========================================================================
**	ft_print.c
** ==========================================================================
*/

int					ft_print_error(void);
void				ft_print_result(int result, int count);
void				ft_free_sort(t_sort *sort);

/*
** ==========================================================================
**	init_stack.c
** ==========================================================================
*/

int					init_argc1(t_stack *stack, char **argv);
int					init_argc2(t_stack *stack, int argc, char **argv);
int					init_stack_a(t_stack *stack, int argc, char **argv);
t_stack				*init_stack_b(t_stack *stack_a);

/*
** ==========================================================================
**	init_sort.c
** ==========================================================================
*/

t_sort				*init_sort(t_stack *stack);

/*
** ==========================================================================
**	init_target.c
** ==========================================================================
*/

void				ft_set_dir(t_stack *stack, t_target *target);
void				ft_set_cost(t_stack *stack, t_target *target);
void				ft_set_index(t_stack *stack, t_target *target, \
									int start, int end);
void				set_target(t_stack *stack, t_target *target, \
								int start, int end);
t_target			*init_target(void);

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
void				ft_free_sort(t_sort *sort);
void				ft_free_target(t_target *target);
/*
** ==========================================================================
**	util.c
** ==========================================================================
*/

void				max_int(t_stack *stack);
void				min_int(t_stack *stack);
int					count_size(char *s, char c);
void				ft_sort_arr(t_stack *stack, t_sort *sort);

int					ft_cost(t_stack *stack, int index);
int					ft_check_chunk(t_stack *stack, t_sort *sort, int index);
int					find_target_int(t_stack *stack_src, t_stack *stack_dest);

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

void				sort_case_3(t_stack *stack_a);
void				sort_case_5(t_stack *stack_a, t_stack *stack_b);
void				sort_case_100(t_stack *stack_a, t_stack *stack_b);
int					sort_case_500(t_stack *stack_a, t_stack *stack_b);

/*
** ==========================================================================
**	sort_case_500.c
** ==========================================================================
*/

void				ft_atob(t_stack *stack_a, t_stack *stack_b, \
								t_target *target);
void				ft_btoa(t_stack *stack_src, t_stack *stack_dest, \
								t_target *target);
void				ft_ps(t_stack *stack_a, t_stack *stack_b, \
									t_sort *sort, t_target *target);
#endif
