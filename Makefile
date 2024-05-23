# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waalexan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 18:02:16 by waalexan          #+#    #+#              #
#    Updated: 2024/05/23 18:44:22 by waalexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_abs.c\
		ft_printptr.c\
		ft_putstr.c\
		ft_printf.c\
		ft_putchar.c\
		ft_putunsigned.c\
		ft_printhex.c\
		ft_putnbr.c\
		ft_strlen.c\
		
NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}
AR = ar rcs
CC =  cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f


${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
		
all: ${NAME}
	
clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
	
