# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/10 10:45:02 by yeonhlee          #+#    #+#              #
#    Updated: 2021/03/14 16:35:41 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	checker

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -f

INCLUDES_PATH	=	../includes/
INCS			=	-I $(INCLUDES_PATH)

GNL				=	libgnl.a
GNLS			=	-L ../libs/gnl/ -lgnl
FT				=	libft.a
FTS				=	-L ../libs/libft/ -lft
SRC_PATH		=	../srcs/
SRC_FILE		=	main_checker.c \
					error.c \
					init_stack.c \
					util.c \
					operate1.c operate2.c

SRCS			=	$(SRC_FILE:%.c=$(SRC_PATH)%.c)
OBJS			=	$(SRCS:.c=.o)

all:				$(NAME)

$(NAME):			$(FT) $(GNL)
					$(CC) $(CFLAGS) $(INCS) $(SRCS) $(FTS) $(GNLS)\
						-o $(NAME)

$(FT):
					$(MAKE) bonus -C ../libs/libft/

$(GNL):
					$(MAKE) -C ../libs/gnl/
					
clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re