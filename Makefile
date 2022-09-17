# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 16:20:58 by seungbae          #+#    #+#              #
#    Updated: 2022/09/17 18:27:05 by seungbae         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		:=	libftprintf.a
SRC         :=      ft_printf.c printf_utils.c printf_utils2.c
OBJ			:=	$(SRC:.c=.o)

CFLAGS		:=	-Wall -Wextra -Werror

OBJECTS = $(OBJ)

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJECTS)
	ar -rc $@ $^

*.o:		*.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean:		clean
	@rm -f $(NAME)

re:			fclean all
