/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:55:59 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/16 16:32:28 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int     find_min_position(t_node *a)
{
    int     value;
    int     pos;
    int     i;
    t_node  *current;

    if(!a)
        return (-1);
    pos = 0;
    i = 0;
    value = a->data;
    current = a;
    while (current)
    {
        if (current->data < value)
        {
            value = current->data;
            pos = i;
        }
        current = current->next;
        i++;
    }
    return (pos);
}
