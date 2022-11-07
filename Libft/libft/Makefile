NAME	=	libft.a
CC		=	cc
CFLAGS	= 	-Wall -Wextra -Werror
SRCS 	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_toupper.c \
				ft_tolower.c ft_strncmp.c ft_memcmp.c ft_strrchr.c ft_strnstr.c \
				ft_strdup.c ft_strjoin.c ft_substr.c ft_strlen.c ft_strlcpy.c \
				ft_strlcat.c ft_memset.c ft_memcpy.c ft_memmove.c ft_strtrim.c \
				ft_split.c
OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	$(CC) -nostartfiles -shared -o libft.so $(OBJS)