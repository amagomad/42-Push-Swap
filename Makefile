CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = push_swap.c rules/pushswap_rules.c rules/pushswap_rules_2.c rules/pushswap_rules_3.c parsing.c

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
