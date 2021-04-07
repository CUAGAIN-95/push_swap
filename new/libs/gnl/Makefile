# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/01 20:26:42 by yeonhlee          #+#    #+#              #
#    Updated: 2021/04/06 20:04:09 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libgnl.a
SRCS	=	./get_next_line.c ./get_next_line_utils.c
OBJS	=	$(SRCS:.c=.o)

AR		=	ar rc
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

%.o:		%c
			$(CC) $(CFLAGS) -c %< -o $@

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean all

.PHONY:		all clean fclean re