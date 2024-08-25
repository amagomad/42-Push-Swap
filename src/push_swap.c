/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:13:56 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 19:34:05 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    push_swap(int ac, t_pushswap *ps)
{
    if (ac - 1 < 6)
        sort_small(ac, ps);
    else if (ac - 1 > 5)
        sort_with_selection(ps);
}

int     main(int ac, char **av)
{
    t_pushswap *ps;

    if (ac > 2)
    {
        ps = init_pushswap(ac, av);
        if (!ps || !ps->a)
        {
            ft_printf("ERROR : Failed allocation\n");
            exit(EXIT_FAILURE);
        }
        // printf("Initial state:\n");
        // printf("Stack A: ");
        // print_list(ps->a);
        // printf("Stack B: ");
        // print_list(ps->b);

        push_swap(ac, ps);

        // printf("Final state:\n");
        // printf("Stack A: ");
        // print_list(ps->a);
        // printf("Stack B: ");
        // print_list(ps->b);
    }
    else
    {
        printf("Error: At least 3 arguments are required.\n");
        return (1);
    }
    return (0);
}