/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:24:33 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/23 16:44:49 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	free_split(char **split)
{
	int		i;

	i = 1;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	execute_radix_pass(t_pushswap *ps, int bit_position, int element_count)
{
	int		index;
	t_node	*current;

	index = 0;
	while (index < element_count)
	{
		current = ps->a;
		if (((current->index >> bit_position) & 1) == 1)
			ra(ps);
		else
			pb(ps);
		index++;
	}
	while (get_stack_size(ps->b) > 0)
		pa(ps);
}

void	sort_large_stack(t_pushswap *ps, int bits_required, int element_count)
{
	int		bit_position;

	bit_position = 0;
	while (bit_position < bits_required)
	{
		execute_radix_pass(ps, bit_position, element_count);
		bit_position++;
	}
}
