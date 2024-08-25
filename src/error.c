/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:23:40 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 19:53:07 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void     args_checker(int ac)
{
    if (ac < 4)
    {
        ft_printf("ERROR : At least 3 argument is required\n");
        exit(EXIT_FAILURE);
    }
}

void    parsing(int ac, char **av, t_pushswap *ps)
{
    int i;
    int value;
    
    i = 1;
    while (i < ac)
    {
        value = ft_atoi(av[i]);
        if (contains_duplicate(ps->a, value))
        {
            ft_printf("ERROR: Duplicate values are not allowed\n");
            exit(EXIT_FAILURE);
        }
        ft_atoi(av[i]);
        i++;
    }
    args_checker(ac);
}
