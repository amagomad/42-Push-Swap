/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_rules_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:02:51 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/12 13:14:21 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    rotate_a(t_pushswap* a)
{
    t_node* current;
    t_node* first;

    if (a == NULL || a->head == NULL || a->head->next == NULL)
        return ;
    first = a->head;
    current = a->head;
    while (current->next != NULL)
        current = current->next;
    a->head = first->next;
    current->next = first;
    first->next = NULL;
}

void    rotate_b(t_pushswap* b)
{
    t_node* first;
    t_node* current;

    if (b == NULL || b->head == NULL || b->head->next == NULL)
        return ;
    first = b->head;
    current = b->head;
    while (current->next != NULL)
        current = current->next;
    b->head = first->next;
    current->next = first;
    first->next = NULL;
}

void    rr(t_pushswap* a, t_pushswap* b)
{
    rotate_a(a);
    rotate_b(b);
}