# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/16 15:52:40 by amolina-          #+#    #+#              #
#    Updated: 2021/04/07 13:52:55 by amolina-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I.

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_putnbr_fd.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strmapi.c ft_split.c

BONUS	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c 

OBJS	= $(SRCS:.c=.o)

B_OBJS	= $(BONUS:.c=.o)

RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) $(B_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

bonus:		$(OBJS) $(B_OBJS)
			ar rcs $(NAME) $(OBJS) $(B_OBJS)

.PHONY:		all clean fclean re bonus
