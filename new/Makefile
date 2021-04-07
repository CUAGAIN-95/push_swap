# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/10 15:37:48 by yeonhlee          #+#    #+#              #
#    Updated: 2021/04/06 20:16:48 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC				=	-I ./includes -I ./libs/libft -I ./libs/gnl
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror

LIB				=	-L./libs/libft -lft
LIBFT_DIR		=	./libs/libft
GNL				=	-L./libs/gnl -lgnl
GNL_DIR			=	./libs/gnl

CHECKER_SRCS	=	$(addprefix ./srcs/checker/, \
					main_checker.c \
					ft_print.c \
					init_stack.c \
					ft_check.c \
					util.c \
					operate1.c \
					operate2.c\
					)

CHECKER_OBJS	=	$(CHECKER_SRCS:.c=.o)

PUSH_SWAP_SRCS	=	$(addprefix ./srcs/push_swap/, \
					main_push_swap.c \
					init/init_sort.c \
					init/init_stack.c \
					init/init_target.c \
					operate/operate1.c \
					operate/operate2.c \
					sort/sort_case.c \
					sort/sort_case_500.c \
					util/ft_check.c \
					util/ft_free.c \
					util/ft_print.c \
					util/util1.c \
					util/util2.c \
					)

PUSH_SWAP_OBJS	=	$(PUSH_SWAP_SRCS:.c=.o)

MAKE			=	make -C
CLEAN			=	make clean -C
FCLEAN			=	make fclean -C

%.o:				%.c
					$(CC) $(CFLAGS) $(INC) -c $< -o $@

all:
					make checker
					make push_swap

checker:			$(CHECKER_OBJS)
					$(MAKE) $(LIBFT_DIR)
					$(MAKE) $(GNL_DIR)
					$(CC) $(CHECKER_OBJS) $(LIB) $(GNL) -o checker

push_swap:			$(PUSH_SWAP_OBJS)
					$(MAKE) $(LIBFT_DIR)
					$(MAKE) $(GNL_DIR)
					$(CC) $(PUSH_SWAP_OBJS) $(LIB) $(GNL) -o push_swap

clean:
					rm -f $(CHECKER_OBJS)
					rm -f $(PUSH_SWAP_OBJS)
					$(CLEAN) $(LIBFT_DIR)
					$(CLEAN) $(GNL_DIR)

fclean:				clean
					$(FCLEAN) $(LIBFT_DIR)
					$(FCLEAN) $(GNL_DIR)
					rm -f checker
					rm -f push_swap

re:					fclean all

.PHONY:				all clean fclean re 