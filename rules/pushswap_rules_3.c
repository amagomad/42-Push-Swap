/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_rules_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:57:58 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/09 12:58:44 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    reverse_rotate_a(t_pushswap* a)
{
    t_node* last;
    t_node* second_last;

    if (a == NULL || a->head == NULL || a->head->next == NULL)
        return ;
    last = a->head;
    second_last = NULL;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }
    last->next = a->head;
    a->head = last;
    second_last->next = NULL;
}

void    reverse_rotate_b(t_pushswap* b)
{
    t_node* last;
    t_node *second_last;

    if (b == NULL || b->head == NULL || b->head->next == NULL)
        return ;
    last = b->head;
    second_last = NULL;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }
    last->next = b->head;
    b->head = last;
    second_last->next = NULL;
}

void    rrr(t_pushswap* a, t_pushswap* b)
{
    reverse_rotate_a(a);
    reverse_rotate_b(b);
}
