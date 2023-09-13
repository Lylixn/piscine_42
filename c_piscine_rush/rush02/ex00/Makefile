NAME = rush-02
CC = gcc
CFLAGS = -fsanitize=address -Wall -Wextra -Werror
SRC = src/*

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

$(NAME): $(SRC:.c=.o)
	$(CC) $(CFLAGS) -o $@ $^

fclean:
	rm -f $(NAME)

re: fclean $(NAME)
