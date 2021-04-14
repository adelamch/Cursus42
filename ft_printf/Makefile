# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 20:34:51 by amolina-          #+#    #+#              #
#    Updated: 2021/04/14 20:59:03 by amolina-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I.

SRCS	= ##

OBJS	= $(SRCS:.c=.o)

RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
