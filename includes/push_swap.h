/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:05:49 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/12 04:03:04 by yeonhlee         ###   ########.fr       */
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

# define ERROR_MALLOC	-1
# define ERROR_ARGUMENT	-2

/*
** ==========================================================================
**  structs
** ==========================================================================
*/

typedef struct			s_stcak
{
	int			top;
	int			size;
	int			*values;
}						t_stack;

/*
** ==========================================================================
**	error.c
** ==========================================================================
*/

int						ft_error(void);

/*
** ==========================================================================
**	init_stack.c
** ==========================================================================
*/

int						init_stack_a(int argc, char **argv, t_stack *stack);
int						init_stack_b(t_stack *stack, int size);


/*
** ==========================================================================
**	util.c
** ==========================================================================
*/

int						check_argument(char *val);

#endif