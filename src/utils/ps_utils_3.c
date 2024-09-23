/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:15:11 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/23 17:40:22 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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

int	handle_sign(const char **str, long *i, int *sign)
{
	if ((*str)[*i] == '-' || (*str)[*i] == '+')
	{
		if ((*str)[*i] == '-')
			*sign = -1;
		(*i)++;
	}
	return ((*str)[*i] < '0' || (*str)[*i] > '9');
}

int	is_valid(char c, int *i)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c == '-' || c == '+')
	{
		if (*i > 0 && c != ' ')
			return (0);
		return ((c == '-' || c == '+') && (c + 1 == '\0'
				|| !(c + 1 >= '0' && c + 1 <= '9')));
	}
	if (c == ' ')
		return (1);
	return (0);
}

void	handle_for_five(t_pushswap *ps, int min_pos)
{
	if (min_pos > 0 && min_pos < 4)
	{
		while (min_pos > 0)
		{
			ra(ps);
			min_pos--;
		}
	}
	else if (min_pos > 3)
	{
		if (min_pos == 4)
		{
			rra(ps);
			rra(ps);
		}
		else if (min_pos == 5)
			rra(ps);
	}
}

void	check_b(t_pushswap *ps)
{
	if (ps->b->data < ps->b->next->data)
		rb(ps);
}
