/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:49:59 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/27 17:36:47 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_stack_size(t_node *stack)
{
	int		size;
	t_node	*current;

	current = stack;
	size = 0;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}

int	ft_atoi(const char *str)
{
	long int	result;
	int			sign;
	int			digit;
	int			i;

	i = 0;
	result = 0;
	sign = 1;
	digit = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		result = atoi_stock(result, digit, str[i]);
		i++;
	}
	range_check(result);
	result *= sign;
	return ((int)result);
}

int	contains_duplicate(t_node *head, int value)
{
	t_node	*current;

	current = head;
	while (current)
	{
		if (current->data == value)
			return (1);
		current = current->next;
	}
	return (0);
}

void	free_pushswap(t_pushswap *ps)
{
	t_node	*current;
	t_node	*next;

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
char	**check_split(char **av)
{
    if (av[1][0] == '"')
	    av = ft_split(av[1], ' ');
	return (av);
}
