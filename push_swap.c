/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:13:56 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/08 18:59:48 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrr(t_pushswap* a, t_pushswap* b)
{
    reverse_rotate_a(a);
    reverse_rotate_b(b);
}

void    push_swap(int *a, int *b)
{
    
}

int     main(int ac, char **av)
{
    if (ac < 2)
    {
        ft_printf("ERROR");
        exit(EXIT_FAILURE);
    }
}