/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:11:51 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/16 16:55:10 by amagomad         ###   ########.fr       */
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

# include "libft/libft.h"
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

int     int_checker(const char  *str);
int     args_checker(int ac);
void    parsing(int ac, t_pushswap* a);

//sort :

void    ft_sort_five(t_pushswap *ps);
void    sort_three(t_node **a);

//utils :

int     find_min_pos(t_node *a);

#endif
