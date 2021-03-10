# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/10 10:45:02 by yeonhlee          #+#    #+#              #
#    Updated: 2021/03/10 14:43:37 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -fclean

INCLUDES_PATH	=	./includes/
INCS			=	-I $(INCLUDES_PATH)

FT				=	libft.a
FTS				=	-L ./libft/ -lft
SRC_PATH		=	./srcs/
SRC_FILE		=	main.c

SRCS			=	$(SRC_FILE:%.c=$(SRC_PATH)%.c)
OBJS			=	$(SRCS:.c=.o)

all:				$(NAME)

$(NAME):			$(FT)
					$(CC) $(CFLAGS) $(INCS) $(SRCS) $(FTS) \
						-o $(NAME)

$(FT):
					$(MAKE) bonus -C ./libft/

clean:
					$(MAKE) -C ./libft/ clean
					$(RM) $(OBJS)

fclean:				clean
					$(RM) ./libft/$(FT)
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re