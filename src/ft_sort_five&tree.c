/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:37:29 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/15 16:05:24 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    sort_three(t_node **a)
{
    int first;
    int second;
    int third;

    if (!a || !(*a) || !(*a)->next || !(*a)->next->next)
        return ;
    first = (*a)->data;
    second = (*a)->next->data;
    third = (*a)->next->next->data;

    if (first > second && second < third && first < third)
        sa(a);
    else if (first > second && second > third && first > third)
    {
        sa(a);
        rra(a);
    }
    else if (first > second && second < third && first > third)
        ra(a);
    else if (first < second && second > third && first < third)
    {
        sa(a);
        ra(a);
    }
    else if (first < second && second > third && first > third)
        rra(a);
}

void ft_sort_five(t_pushswap *ps)
{
    int min_pos;
    int i;

    i = 0;
    while (i < 2) 
    {
        min_pos = find_min_position(ps->a);
        if (min_pos == 1)
            sa(ps);
        while (min_pos > 0)
        {
            ra(ps);
            min_pos--;
        }
        pb(ps);
        i++;
    }
    sort_three(&(ps->a));
    pa(ps);
    pa(ps);
}

int find_min_position(t_node *a)
{
    int min_value;
    int min_pos;
    int i;
    t_node *current;

    min_value = a->data;
    min_pos = 0;
    i = 0;
    current = a;
    while (current)
    {
        if (current->data < min_value)
        {
            min_value = current->data;
            min_pos = i;
        }
        current = current->next;
        i++;
    }
    return min_pos;
}