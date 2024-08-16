CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = src/push_swap.c src/ps_rules.c src/ps_rules_2.c src/ps_rules_3.c src/parsing.c src/ps_utils.c src/sort_five&tree.c

OBJ = $(SRC:.c=.o)

NAME = pipex

all: $(NAME)

libft/libft.a:
	make -C libft

$(NAME): libft/libft.a $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
