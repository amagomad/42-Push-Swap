/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:57:58 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 19:30:39 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    rra(t_pushswap *ps)
{
    t_node *last;
    t_node *second_last;

    if (ps == NULL || ps->a == NULL || ps->a->next == NULL)
        return;
    last = ps->a;
    second_last = NULL;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }
    if (second_last)
        second_last->next = NULL;
    last->next = ps->a;
    ps->a = last;
}


void    rrb(t_pushswap *ps)
{
    t_node *last;
    t_node *second_last;

    if (ps == NULL || ps->b == NULL || ps->b->next == NULL)
        return;
    last = ps->b;
    second_last = NULL;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }
    last->next = ps->b;
    ps->b = last;
    second_last->next = NULL;
}

void    rrr(t_pushswap *ps)
{
    rra(ps);
    rrb(ps);
}
