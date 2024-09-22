/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:15:11 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/22 15:37:45 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	range_check(long int a)
{
	if (a > 2147483647 || a < -2147483648)
	{
		ft_printf("ERROR : Argument out of range\n");
		exit(EXIT_FAILURE);
	}
}

void	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
	{
		ft_printf("ERROR : Invalid character in argument\n");
		exit(EXIT_FAILURE);
	}
}

void	int_value(int result, int digit)
{
	if (result > (2147483647 - digit) / 10)
	{
		ft_printf("ERROR : Argument exceeds maximum int value\n");
		exit(EXIT_FAILURE);
	}
}

int	atoi_stock(int result, int digit, int c)
{
	ft_isdigit(c);
	digit = c - '0';
	int_value(result, digit);
	result = result * 10 + digit;
	return (result);
}

void	check_order(t_pushswap *ps)
{
	t_node	*current;
	t_node	*prev;

	if (!ps || !ps->a || !ps->a->next)
		return ;
	prev = ps->a;
	current = prev->next;
	while (current != NULL)
	{
		if (prev->data > current->data)
			return ;
		prev = current;
		current = current->next;
	}
	exit(EXIT_SUCCESS);
}
