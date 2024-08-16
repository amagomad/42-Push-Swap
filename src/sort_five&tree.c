/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five&tree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:37:29 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/16 16:58:45 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort_three(t_pushswap *ps)
{
    int first;
    int second;
    int third;

    if (!ps || !ps->a || !ps->a->next || !ps->a->next->next)
        return;
    first = ps->a->data;
    second = ps->a->next->data;
    third = ps->a->next->next->data;
    if (first > second && second < third && first < third)
        sa(ps);
    else if (first > second && second > third && first > third)
    {
        sa(ps);
        rra(ps);
    }
    else if (first > second && second < third && first > third)
        ra(ps);
    else if (first < second && second > third && first < third)
    {
        sa(ps);
        ra(ps); 
    }
    else if (first < second && second > third && first > third)
        rra(ps);
}


void    sort_five(t_pushswap *ps)
{
    int     min_pos;
    int     i;

    i = 0;
    min_pos = 0;
    while (i < 2)
    {
        find_min_pos(ps->a);
        if (min_pos > 0)
        {
            while (min_pos > 0)
            {
                ra(ps);
                min_pos--;
            }
        }
        pb(ps);
        i++;
    }
    sort_three(ps->a);
    pa(ps);
    pa(ps);
}