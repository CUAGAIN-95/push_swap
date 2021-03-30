# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/10 15:37:48 by yeonhlee          #+#    #+#              #
#    Updated: 2021/03/26 19:34:50 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKE_LIBFT		=	./libs/libft
MAKE_GNL		=	./libs/gnl
MAKE_CHECKER	=	./checker_dir
MAKE_PUSH_SWAP	=	./push_swap_dir

CLEAN			=	make clean -C
FCLEAN			=	make fclean -C

all:
					make -C $(MAKE_LIBFT)
					make -C $(MAKE_GNL)
					make -C $(MAKE_CHECKER)
					make -C $(MAKE_PUSH_SWAP)
					mv ./checker_dir/checker ./
					mv ./push_swap_dir/push_swap ./

clean:
					$(CLEAN) $(MAKE_LIBFT)
					$(CLEAN) $(MAKE_GNL)
					$(CLEAN) $(MAKE_CHECKER)
					$(CLEAN) $(MAKE_PUSH_SWAP)

fclean:				clean
					$(FCLEAN) $(MAKE_LIBFT)
					$(FCLEAN) $(MAKE_GNL)
					$(FCLEAN) $(MAKE_CHECKER)
					$(FCLEAN) $(MAKE_PUSH_SWAP)
					rm -f checker
					rm -f push_swap

re:					fclean all

.PHONY:				all clean fclean re