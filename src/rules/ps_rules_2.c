/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:02:51 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 19:30:25 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    ra(t_pushswap *ps)
{
    t_node *first;
    t_node *last;

    if (ps == NULL || ps->a == NULL || ps->a->next == NULL)
        return;
    first = ps->a;
    last = ps->a;
    while (last->next != NULL)
        last = last->next;
    ps->a = first->next;
    last->next = first;
    first->next = NULL;
    ft_printf("ra\n");
}


void    rb(t_pushswap* ps)
{
    t_node* first;
    t_node* current;

    if (ps == NULL || ps->b == NULL || ps->b->next == NULL)
        return ;
    first = ps->b;
    current = ps->b;
    while (current->next != NULL)
        current = current->next;
    ps->b = first->next;
    current->next = first;
    first->next = NULL;
    ft_printf("rb\n");
}

void    rr(t_pushswap *ps)
{
    ra(ps);
    rb(ps);
    ft_printf("rr\n");
}