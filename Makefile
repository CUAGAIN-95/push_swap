# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/10 15:37:48 by yeonhlee          #+#    #+#              #
#    Updated: 2021/03/11 18:55:16 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKE_LIBFT		=	./libs/libft
MAKE_GNL		=
MAKE_CHECKER	=	./checker
MAKE_PUSH_SWAP	=	./push_swap

CLEAN			=	make clean -C
FCLEAN			=	make fclean -C

all:
					make -C $(MAKE_LIBFT)
					make -C $(MAKE_CHECKER)
					make -C $(MAKE_PUSH_SWAP)

clean:
					$(CLEAN) $(MAKE_LIBFT)
					$(CLEAN) $(MAKE_CHECKER)
					$(CLEAN) $(MAKE_PUSH_SWAP)

fclean:	clean
					$(FCLEAN) $(MAKE_LIBFT)
					$(FCLEAN) $(MAKE_CHECKER)
					$(FCLEAN) $(MAKE_PUSH_SWAP)

re:					fclean all

.PHONY:				all clean fclean re