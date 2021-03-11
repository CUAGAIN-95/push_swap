/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:05:49 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/03/11 19:21:28 by yeonhlee         ###   ########.fr       */
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

# define ERROR_MALLOC	-1
# define ERROR_ARGUMENT	-2

typedef struct			s_stcak
{
	int			top;
	int			size;
	int			*values;
}						t_stack;

#endif