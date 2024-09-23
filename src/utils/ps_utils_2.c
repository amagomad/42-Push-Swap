/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:49:59 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/23 14:13:44 by amagomad         ###   ########.fr       */
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

int		ft_atoi(const char *str, int *error)
{
	long	i;
	long	number;
	int		sign;

	i = 0;
	number = 0;
	sign = 1;
	*error = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
	{
		*error = 1;
		return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	if (check_limits(number, sign))
		*error = 1;
	return (number * sign);
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
	char	**final;
	int		i;
	int		arg;

	arg = 1;
	i = ft_strlen(av[1]);
	if (i >= 3)
	{
		final = allocate_final_array(i);
		i = 0;
		fill_final_array(final, av[1], &i, &arg);
	}
	else
		exit(EXIT_SUCCESS);
	return (final);
}
