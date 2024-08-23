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

int    int_max(int ac, char *z)
{
    int     i;

    i = ft_atoi(z);
    if (i > 2147483647)
    {
        ft_printf("ERROR : no argument should be higher than 2147483647 (int max)");
        exit(EXIT_FAILURE);
    }
    else if (i < -2147483648)
    {
        ft_printf("ERROR : no argument should be below -2147483648 (int min)");
        exit(EXIT_FAILURE);
    }
    return (0);
}

void    parsing(int ac, char **av)
{
    int     i;

    i = 0;
    while (i < ac)
        int_max(argv[i++]);
    args_checker(ac);
}

