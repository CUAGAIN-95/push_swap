# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/10 10:45:02 by yeonhlee          #+#    #+#              #
#    Updated: 2021/03/10 15:57:17 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	checker

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -f

INCLUDES_PATH	=	../includes/
INCS			=	-I $(INCLUDES_PATH)

FT				=	libft.a
FTS				=	-L ../libft/ -lft
SRC_PATH		=	../srcs/
SRC_FILE		=	main_checker.c

SRCS			=	$(SRC_FILE:%.c=$(SRC_PATH)%.c)
OBJS			=	$(SRCS:.c=.o)

all:				$(NAME)

$(NAME):			$(FT)
					$(CC) $(CFLAGS) $(INCS) $(SRCS) $(FTS) \
						-o $(NAME)

$(FT):
					$(MAKE) bonus -C ../libft/

clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re