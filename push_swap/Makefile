# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/10 10:45:02 by yeonhlee          #+#    #+#              #
#    Updated: 2021/03/25 19:32:51 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -f

INCLUDES_PATH	=	../includes/
INCS			=	-I $(INCLUDES_PATH)

# GNL				=	libgnl.a
# GNLS			=	-L ../libs/gnl/ -lgnl
FT				=	libft.a
FTS				=	-L ../libs/libft/ -lft
SRC_PATH		=	./srcs/
SRC_FILE		=	main_push_swap.c \
					init_stack.c \
					ft_print.c \
					ft_check.c \
					ft_free.c \
					util1.c util2.c \
					operate1.c operate2.c \
					sort_case.c \
					sort_case_5.c sort_case_500.c\
					test_util.c # test

SRCS			=	$(SRC_FILE:%.c=$(SRC_PATH)%.c)
OBJS			=	$(SRCS:.c=.o)

all:				$(NAME)

$(NAME):			$(FT) #$(GNL)
					$(CC) $(CFLAGS) $(INCS) $(SRCS) $(FTS) \
						-o $(NAME)

$(FT):
					$(MAKE) bonus -C ../libs/libft/

# $(GNL):
# 					$(MAKE) -C ../libs/gnl/
clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re