/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:11:51 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/15 16:04:53 by amagomad         ###   ########.fr       */
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

void	swap_a(t_pushswap *a);
void    swap_b(t_pushswap *b);
void    ss(t_pushswap *a, t_pushswap *b);
void    push_a(t_pushswap* a, t_pushswap* b);
void    push_b(t_pushswap* a, t_pushswap* b);
void    rrr(t_pushswap* a, t_pushswap* b);
void    rotate_a(t_pushswap* a);
void    rotate_b(t_pushswap* b);
void    rr(t_pushswap* a, t_pushswap* b);
void    reverse_rotate_a(t_pushswap* a);
void    reverse_rotate_b(t_pushswap* b);

//parsing :

int     int_checker(const char  *str);
int     args_checker(int ac);
void    parsing(int ac, t_pushswap* a);

//sort :

void    ft_sort_five(t_pushswap *ps);
void    sort_three(t_node **a);

#endif
