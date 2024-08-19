/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:11:51 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 18:32:02 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
    int             data;
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

void    int_checker(t_pushswap *a);
void    args_checker(int ac);
void    parsing(int ac, t_pushswap* a);

//sort :

void    sort_five(t_pushswap *ps);
void    sort_three(t_pushswap *ps);

//utils :

int         find_min_position(t_node *a);
int         ft_isdigit(int c);
t_node      *new_node(int data);
t_pushswap  *init_pushswap(int ac, char **av);
void        add_node_end(t_node **head, int data);

//main :

void    push_swap(int ac, t_pushswap *ps);
void    print_list(t_node *head);

#endif
