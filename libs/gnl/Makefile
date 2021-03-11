# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 19:27:39 by yeonhlee          #+#    #+#              #
#    Updated: 2021/03/11 19:48:04 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libgnl.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

INCS	=	-I./
SRCS	=	./get_next_line.c ./get_next_line_utils.c
OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean all

.PHONY:		all clean fclean re