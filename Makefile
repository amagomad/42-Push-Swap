CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = src/push_swap.c src/ps_rules.c src/ps_rules_2.c src/ps_rules_3.c src/parsing.c src/ps_utils.c src/sort_five_tree.c 
OBJ = $(SRC:.c=.o)
NAME = push_swap

LIBFTPRINTF = includes/ft_printf/libftprintf.a
INCLUDES = -I includes/ft_printf

all: $(NAME)

$(LIBFTPRINTF):
	make -C includes/ft_printf

$(NAME): $(LIBFTPRINTF) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFTPRINTF) $(INCLUDES)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C includes/ft_printf clean

fclean: clean
	rm -f $(NAME)
	make -C includes/ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
