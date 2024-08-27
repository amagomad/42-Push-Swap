/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:49:59 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 19:50:31 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int get_stack_size(t_node *stack)
{
    int size;
    t_node *current;

    current = stack;
    size = 0;
    while (current)
    {
        size++;
        current = current->next;
    }
    return (size);
}

int		ft_atoi(const char *str)
{
    long int	result;
    int			sign;
    int			digit;

    result = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str)
    {
        if (*str < '0' || *str > '9')
        {
            ft_printf("ERROR: Invalid character in argument\n");
            exit(EXIT_FAILURE);
        }
        digit = *str - '0';
        if (result > (2147483647 - digit) / 10)
        {
            ft_printf("ERROR: Argument exceeds maximum int value\n");
            exit(EXIT_FAILURE);
        }
        result = result * 10 + digit;
        str++;
    }
    result *= sign;
    if (result > 2147483647 || result < -2147483648)
    {
        ft_printf("ERROR: Argument out of range\n");
        exit(EXIT_FAILURE);
    }
    return (int)result;
}


int     ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int contains_duplicate(t_node *head, int value)
{
    t_node *current;

    current = head;
    while (current)
    {
        if (current->data == value)
            return (1);
        current = current->next;
    }
    return (0);
}

void free_pushswap(t_pushswap *ps)
{
    t_node *current;
    t_node *next;

    if (ps)
    {
        current = ps->a;
        while (current)
        {
            next = current->next;
            free(current);
            current = next;
        }
        current = ps->b;
        while (current)
        {
            next = current->next;
            free(current);
            current = next;
        }
        free(ps);
    }
}
