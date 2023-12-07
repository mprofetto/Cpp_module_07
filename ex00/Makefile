# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 10:38:47 by mprofett          #+#    #+#              #
#    Updated: 2023/12/07 14:49:21 by mprofett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ./few_functions

SRC			= main.cpp

OBJ			= ${SRC:.cpp=.o}

CC			= c++

RM			= rm -rf

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
