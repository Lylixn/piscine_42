NAME	=	bsq
DEBUG	=	debugage
CC		=	cc
CFLAGS	+=	-Wall -Wextra -Werror
CDFLAGS +=	-Wall -Wextra -Werror -fsanitize=address
INC_DIR	=	./includes
HEADERS =	$(INC_DIR)/bsq.h

SRCS	=	./src/main.c \
			./src/file_parsing.c \
			./src/check_map.c \
			./src/libft_1.c \
			./src/map.c \
			./src/print.c \
			./src/map_resolve.c \
			./src/init.c \
			./src/libft_2.c

OBJS	=	$(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I$(INC_DIR)

$(DEBUG): $(OBJS)
	$(CC) $(CDFLAGS) -o $(DEBUG) $(OBJS) -I$(INC_DIR)

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(DEBUG)

re: fclean all

debug: fclean $(DEBUG) all
	

.PHONY: all clean fclean re
