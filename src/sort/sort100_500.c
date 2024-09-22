/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100_500.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:44:56 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/22 15:54:31 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	calculate_bits_required(t_pushswap *ps)
{
	t_node	*iterator;
	int		highest_value;
	int		bit_count;

	iterator = ps->a;
	bit_count = 0;
	if (iterator == NULL)
		return (0);
	highest_value = iterator->index;
	while (iterator != NULL)
	{
		if (iterator->index > highest_value)
			highest_value = iterator->index;
		iterator = iterator->next;
	}
	while ((highest_value >> bit_count) != 0)
		bit_count++;
	return (bit_count);
}

void	algo(int ac, t_pushswap *ps)
{
	int		element_count;
	int		bits_required;

	if (ac - 1 <= 5)
	{
		sort_small(ac, ps);
		return ;
	}
	check_order(ps);
	element_count = get_stack_size(ps->a);
	bits_required = calculate_bits_required(ps);
	sort_large_stack(ps, bits_required, element_count);
	free_pushswap(ps);
}
