# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 15:39:32 by brumarti          #+#    #+#              #
#    Updated: 2022/11/24 15:07:52 by brumarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Game

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(NAME)

clean :
	rm -rf *.O

fclean: clean
	rm -rf $(NAME)

re: fclean all
