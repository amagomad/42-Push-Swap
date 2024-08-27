/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:11:51 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 19:50:55 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define BUCKETS 5
# define BUCKET_SIZE 20

typedef struct s_node
{
    int             data;
    int             index;
    struct s_node   *next;
} t_node;

typedef struct s_pushswap
{
    t_node  *a;
    t_node  *b;
} t_pushswap;

# include "ft_printf/ft_printf.h"
# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>

//rules :

void	sa(t_pushswap *ps);
void    sb(t_pushswap *ps);
void    ss(t_pushswap *ps);
void    pa(t_pushswap *ps);
void    pb(t_pushswap *ps);
void    ra(t_pushswap *ps);
void    rb(t_pushswap *ps);
void    rr(t_pushswap *ps);
void    rra(t_pushswap *ps);
void    rrb(t_pushswap *ps);
void    rrr(t_pushswap *ps);

//parsing :

void    args_checker(int ac);
int     int_max(char *z);
void    parsing(int ac, char **av, t_pushswap *ps);

//sort :

void    sort_three(t_pushswap *ps);
void    sort_four(t_pushswap *ps);
void    sort_five(t_pushswap *ps);
void    sort_small(int ac, t_pushswap *ps);
void    sort_large(t_pushswap *ps);
void    sort_therest(t_pushswap *ps);
void    algo(t_pushswap *ps);

//utils :

int         calculate_bits_required(t_pushswap *ps);
int         find_min_position(t_node *a);
int         ft_isdigit(int c);
int         ft_atoi(const char *str);
int         get_stack_size(t_node *stack);
int         contains_duplicate(t_node *head, int value);
void        add_node_end(t_node **head, int data);
void        print_list(t_node *head);
void        free_pushswap(t_pushswap *ps);
t_node      *new_node(int data);
t_pushswap  *init_pushswap(int ac, char **av);

// index :

void    assign_index(t_pushswap *ps, int ac);
int    index_finder(t_pushswap *ps, int nu);

//main :

void    push_swap(int ac, t_pushswap *ps);

#endif
