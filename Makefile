CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address,undefined,integer
SRC = src/push_swap.c src/rules/ps_rules.c src/rules/ps_rules_2.c src/rules/ps_rules_3.c src/error.c src/utils/ps_utils.c src/utils/ps_utils_2.c src/sort_treetofive.c 
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
