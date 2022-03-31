# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 23:09:09 by guda-sil@st       #+#    #+#              #
#    Updated: 2022/03/29 23:09:29 by guda-sil@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = ft_putchar.o	\
	ft_putstr.o		\
	ft_strcmp.o		\
	ft_strlen.o		\
	ft_swap.o

NAME = libft.a

HEADER = ./includes/

SRC = ./srcs/ft_putchar.c	./srcs/ft_putstr.c	\
		./srcs/ft_strcmp.c	./srcs/ft_strlen.c	\
		./srcs/ft_swap.c

FLAGS = -Wall -Wextra -Werror

.PHONY:	all clean	fclean	re

all:	${NAME}

${NAME}:
	gcc $(FLAGS) -c -I $(HEADER) $(SRC)
	ar rcs ${NAME} ${OBJS}

clean:
	/bin/rm -f $(OBJS)

fclean:	clean
	/bin/rm -f ${NAME}

re:	fclean all
