/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:31:49 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 19:30:45 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_pushswap *ps)
{
    t_node  *first;
    t_node  *second;
    int     tmp;

    if (ps == NULL || ps->a == NULL || ps->a->next == NULL)
        return ;
    first = ps->a;
    second = ps->a->next;
    tmp = first->data;
    first->data = second->data;
    second->data = tmp;
    ft_printf("sa\n");
}

void    sb(t_pushswap* ps)
{
    t_node      *first;
    t_node      *second;
    int         tmp;

    if (ps == NULL || ps->b == NULL || ps->b->next == NULL)
        return ;
    first = ps->b;
    second = ps->b->next;
    tmp = first->data;
    first->data = second->data;
    second->data = tmp;
    ft_printf("sb\n");
}

void    ss(t_pushswap *ps)
{
    sa(ps);
    sb(ps);
    ft_printf("ss\n");
}

void pa(t_pushswap* ps)
{
    t_node  *first_b;

    if (ps == NULL || ps->b == NULL)
        return ;
    first_b = ps->b;
    ps->b = first_b->next;
    first_b->next = ps->a;
    ps->a = first_b;
    ft_printf("pa\n");
}

void    pb(t_pushswap *ps)
{
    t_node  *first_a;

    if (ps == NULL || ps->a == NULL)
        return ;
    first_a = ps->a;
    ps->a = first_a->next;
    first_a->next = ps->b;
    ps->b = first_a;
    ft_printf("pb\n");
}
