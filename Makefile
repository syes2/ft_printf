# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sushu <sushu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 16:20:58 by seungbae          #+#    #+#              #
#    Updated: 2022/09/18 16:27:22 by sushu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libftprintf.a
SRC         :=      ft_printf.c printf_utils.c
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
