/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:23:40 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 18:35:01 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void int_checker(t_pushswap *ps)
{
    t_node *current;

    current = ps->a;
    while (current != NULL)
        current = current->next;
}

void     args_checker(int ac)
{
    if (ac < 4)
    {
        ft_printf("ERROR : At least 3 argument is required\n");
        exit(EXIT_FAILURE);
    }
}

void    parsing(int ac, t_pushswap *ps)
{
    args_checker(ac);
    int_checker(ps);
}
