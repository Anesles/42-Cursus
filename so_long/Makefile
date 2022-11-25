# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 15:39:32 by brumarti          #+#    #+#              #
#    Updated: 2022/11/25 17:23:04 by brumarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

LIBFTPATH = ./libft/

LIBFTNAME = libft.a

SRC = main.c error_check/check_valid.c error_check/send_error.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFTPATH)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFTPATH)$(LIBFTNAME) -o $(NAME)

clean :
	rm -rf $(OBJ)
	cd libft && $(MAKE) clean

fclean: clean 
	rm -f $(LIBFTPATH)$(LIBFTNAME) $(NAME)

re: fclean all

run:
	./so_long.a
