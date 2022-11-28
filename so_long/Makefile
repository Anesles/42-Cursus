# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 15:39:32 by brumarti          #+#    #+#              #
#    Updated: 2022/11/28 15:48:50 by brumarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

MINILIBX = -I /usr/local/include -g -L /usr/local/lib -l mlx -lX11 -lXext -lGLEW -lglfw -lGL -lm

LIBFTPATH = ./libft/

LIBFTNAME = libft.a

SRC = main.c

ERROR = error_check/check_valid.c error_check/send_error.c error_check/check_extra.c

FLOOD = flood/flood_fill.c

GAME = game/game_main.c

OBJ = $(SRC:.c=.o) $(ERROR:.c=.o) $(FLOOD:.c=.o) $(GAME:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFTPATH)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFTPATH)$(LIBFTNAME) $(MINILIBX) -o $(NAME)

clean :
	rm -rf $(OBJ)
	cd libft && $(MAKE) clean

fclean: clean 
	rm -f $(LIBFTPATH)$(LIBFTNAME) $(NAME)

re: fclean all

run:
	./so_long.a
