/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:13:56 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 18:21:34 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    push_swap(int ac, t_pushswap *ps)
{
    if (ac == 3)
        sort_three(ps);
    else if (ac == 5)
        sort_five(ps);
}

int main(int ac, char **av)
{
    t_pushswap *ps;

    if (ac > 2)
    {
        ps = init_pushswap(ac, av);
        if (!ps || !ps->a)
            return (1);
        push_swap(ac, ps);
    }
    return (0);
}
