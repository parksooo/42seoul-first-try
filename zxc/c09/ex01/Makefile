# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suhpark <suhpark@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 14:02:54 by suhpark           #+#    #+#              #
#    Updated: 2022/05/04 16:12:00 by suhpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC	= gcc

CFLAGS	= -Wall -Wextra -Werror

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

INCLUDES	= includes

NAME	= libft.a

.c.o:
		${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all :	${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
