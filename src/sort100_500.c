/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100_500.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:44:56 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/27 09:44:05 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int  calculate_bits_required(t_pushswap *ps)
{
    t_node      *iterator;
    int         highest_value;
    int         bit_count;

    iterator = ps->a;
    bit_count = 0;
    if (iterator == NULL)
        return (0);
    highest_value = iterator->index;
    while (iterator != NULL)
    {
        if (iterator->index > highest_value)
            highest_value = iterator->index;
        iterator = iterator->next;
    }
    while ((highest_value >> bit_count) != 0)
        bit_count++;
    return bit_count;
}

void    algo(t_pushswap *ps)
{
    t_node      *current;
    int         bit_position;
    int         element_count;
    int         bits_required;
    int         index;

    bit_position = 0;
    current = ps->a;
    element_count = get_stack_size(current);
    bits_required = calculate_bits_required(ps);
    while (bit_position < bits_required)
    {
        index = 0;
        while (index < element_count)
        {
            current = ps->a;
            if (((current->index >> bit_position) & 1) == 1)
                ra(ps);
            else
                pb(ps);
            index++;
        }
        while (get_stack_size(ps->b) > 0)
            pa(ps);
        bit_position++;
    }
}
