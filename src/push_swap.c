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

void push_swap(int ac, t_pushswap *ps)
{
    if (ac - 1 < 6)
        sort_small(ac, ps);
    else if (ac - 1 > 5 && ac - 1 != 100 && ac - 1 != 500)
        sort_therest(ps);
    else if (ac - 1 == 100 || ac - 1 == 500)
        algo(ps);
}

int     main(int ac, char **av)
{
    t_pushswap *ps;

    args_checker(ac);
    ps = init_pushswap(ac, av);
    if (!ps || !ps->a)
    {
        ft_printf("ERROR : Failed allocation\n");
        exit(EXIT_FAILURE);
    }
    assign_index(ps, ac);
    push_swap(ac, ps);
}