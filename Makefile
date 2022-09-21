NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
REMOVE = rm -rf

SRCS = ft_bzero.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_atoi.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_itoa.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		 ft_strmapi.c ft_striteri.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

%.o: %.c
	$(CC) -c -I ./ $(CFLAGS) $< -o $@
	ar -rcs $(NAME) $@

git:
	git add *.c libft.h Makefile
	sleep 3
	git commit -m "Auto push from Makefile"
	git push

.PHONY: re fclean clean all $(NAME) git
