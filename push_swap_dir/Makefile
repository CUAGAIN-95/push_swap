# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/10 10:45:02 by yeonhlee          #+#    #+#              #
#    Updated: 2021/04/01 21:32:13 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -f

INCLUDES_PATH	=	../includes/
INCS			=	-I $(INCLUDES_PATH)

FT				=	libft.a
FTS				=	-L ../libs/libft/ -lft
SRC_PATH		=	./srcs/
SRC_FILE		=	main_push_swap.c \
					init/init_stack.c init/init_sort.c init/init_target.c \
					util/ft_print.c \
					util/ft_check.c \
					util/ft_free.c \
					util/util1.c util/util2.c \
					operate/operate1.c operate/operate2.c \
					sort/sort_case.c \
					sort/sort_case_500.c

SRCS			=	$(SRC_FILE:%.c=$(SRC_PATH)%.c)
OBJS			=	$(SRCS:.c=.o)

all:				$(NAME)

$(NAME):			$(FT)
					$(CC) $(CFLAGS) $(INCS) $(SRCS) $(FTS) \
						-o $(NAME)

$(FT):
					$(MAKE) bonus -C ../libs/libft/

clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re