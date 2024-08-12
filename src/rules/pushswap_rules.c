/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_rules.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:31:49 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/12 13:14:30 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_a(t_pushswap* a)
{
    t_node* first;
    t_node* second;
    int     tmp;

    if (a == NULL || a->head == NULL || a->head->next == NULL)
        return ;
    first = a->head;
    second = a->head->next;
    tmp = first->data;
    first->data = second->data;
    second->data = tmp;
}

void    swap_b(t_pushswap* b)
{
    t_node*     first;
    t_node*     second;
    int         tmp;

    if (b == NULL || b->head == NULL || b->head->next == NULL)
        return ;
    first = b->head;
    second = b->head->next;
    tmp = first->data;
    first->data = second->data;
    second->data = tmp;
}

void    ss(t_pushswap* a, t_pushswap* b)
{
    swap_a(a);
    swap_b(b);
}

void    push_a(t_pushswap* a, t_pushswap* b)
{
    t_node* first_b;

    if (b == NULL || b->head == NULL)
        return ;
    first_b = b->head;
    b->head = first_b->next;
    first_b->next = a->head;
    a->head = first_b;
}

void    push_b(t_pushswap* a, t_pushswap* b)
{
    t_node*     first_a;

    if (a == NULL || a->head == NULL)
        return ;
    first_a = a->head;
    a->head = first_a->next;
    first_a->next = b->head;
    b->head = first_a;
}
