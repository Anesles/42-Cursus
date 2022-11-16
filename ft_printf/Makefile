# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 22:05:52 by brumarti          #+#    #+#              #
#    Updated: 2022/11/16 16:32:37 by brumarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprint.a

SRC =		ft_printf.c ft_printf_char.c ft_printf_number.c ft_printf_utils.c

OBJ =		$(SRC:.c=.o)

CC =		cc

CFLAGS =	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

re: fclean all