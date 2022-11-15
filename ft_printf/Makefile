# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 22:05:52 by brumarti          #+#    #+#              #
#    Updated: 2022/11/15 22:40:53 by brumarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprint.a

SRC = ft_printf.c ft_printf_char.c ft_printf_utils.c

OBJ = $(SRC=.c:.0)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all