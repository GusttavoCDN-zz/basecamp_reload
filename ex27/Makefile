# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 16:07:25 by guda-sil@st       #+#    #+#              #
#    Updated: 2022/03/30 16:07:27 by guda-sil@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_display_file

FLAGS = -Wall -Werror -Wextra

SRC = ft_display_file.c

CC = gcc

all: ${NAME}

${NAME}:
	${CC} ${FLAGS} ${SRC} -o ${NAME}

clean:
	/bin/rm -f *.o

fclean:	clean
	/bin/rm -f ${NAME}

re: fclean all
