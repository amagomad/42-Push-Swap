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

int int_max(char *z)
{
    long result = 0;
    int sign = 1;
    int digit;

    // Skip leading whitespace
    while (*z == ' ' || (*z >= 9 && *z <= 13))
        z++;

    // Check for sign
    if (*z == '-' || *z == '+')
    {
        if (*z == '-')
            sign = -1;
        z++;
    }

    // Convert string to integer manually
    while (*z)
    {
        if (*z < '0' || *z > '9')
        {
            ft_printf("ERROR: Invalid character in argument\n");
            exit(EXIT_FAILURE);
        }
        digit = *z - '0';

        // Check for overflow/underflow
        if (result > (2147483647 - digit) / 10)
        {
            ft_printf("ERROR: Argument exceeds maximum int value\n");
            exit(EXIT_FAILURE);
        }
        result = result * 10 + digit;

        z++;
    }

    // Apply the sign
    result *= sign;

    // Check for final overflow/underflow
    if (result > 2147483647 || result < -2147483648)
    {
        ft_printf("ERROR: Argument out of range\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}

void    parsing(int ac, char **av)
{
    int     i;

    i = 0;
    while (i < ac)
        int_max(av[i++]);
    args_checker(ac);
}
