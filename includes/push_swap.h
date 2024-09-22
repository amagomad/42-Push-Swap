/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:11:51 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/22 16:28:31 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define BUCKETS 5
# define BUCKET_SIZE 20

# include "ft_printf/ft_printf.h"
# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>
# include <limits.h>

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_pushswap
{
	t_node	*a;
	t_node	*b;
}	t_pushswap;

//rules :

void		sa(t_pushswap *ps);
void		sb(t_pushswap *ps);
void		ss(t_pushswap *ps);
void		pa(t_pushswap *ps);
void		pb(t_pushswap *ps);
void		ra(t_pushswap *ps);
void		rb(t_pushswap *ps);
void		rr(t_pushswap *ps);
void		rra(t_pushswap *ps);
void		rrb(t_pushswap *ps);
void		rrr(t_pushswap *ps);

//sort :

void		sort_two(t_pushswap *ps);
void		sort_three(t_pushswap *ps);
void		sort_four(t_pushswap *ps);
void		sort_five(t_pushswap *ps);
void		sort_small(int ac, t_pushswap *ps);
void		sort_large(t_pushswap *ps);
void		sort_therest(t_pushswap *ps);
void		algo(int ac, t_pushswap *ps);

//utils :

int			calculate_bits_required(t_pushswap *ps);
int			find_min_position(t_node *a);
int			ft_atoi(const char *str);
int			get_stack_size(t_node *stack);
int			contains_duplicate(t_node *head, int value);
int			atoi_stock(int result, int digit, int c);
size_t		ft_strlen(const char *str);
void		ft_isdigit(int c);
void		add_node_end(t_node **head, int data);
void		print_list(t_node *head);
void		free_pushswap(t_pushswap *ps);
void		range_check(long int a);
void		int_value(int result, int digit);
void		check_order(t_pushswap *ps);
void		free_split(char **av);
t_node		*new_node(int data);
t_pushswap	*init_pushswap(int ac, char **av);
size_t		ft_length(const char *s, char c);
char		**ft_split(const char *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		**check_split(char **av);
int			print_av(int ac, char **s);
void		execute_radix_pass(t_pushswap *ps, int bit_position,
				int element_count);
void		sort_large_stack(t_pushswap *ps, int bits_required,
				int element_count);
void		check_order_or_sort_small(int ac, t_pushswap *ps);
char		**allocate_final_array(int size);
char		*allocate_word(const char *av, int i, int j);
void		fill_final_array(char **final, const char *av, int *i, int *arg);
int			get_sign(const char **str);
long int	convert_to_number(const char **str, int sign);

// index :

void		assign_index(t_pushswap *ps, int ac);
int			index_finder(t_pushswap *ps, int nu);

//main :

void		push_swap(int ac, t_pushswap *ps);

#endif
