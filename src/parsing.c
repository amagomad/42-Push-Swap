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

void    int_max(int ac, char *z)
{
    int     i;

    i = ft_atoi(z);
    if (i > 2147483647)
    {
        ft_printf("ERROR : argument number %i is too big (int max)", ac);
        exit(EXIT_FAILURE);
    }
    else if (i < -2147483648)
    {
        ft_printf("ERROR : argument number %i is too low (int min)", ac);
        exit(EXIT_FAILURE);
    }
}

void    parsing(int ac)
{
    args_checker(ac);
}

