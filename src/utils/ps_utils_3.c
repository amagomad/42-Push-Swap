/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:15:11 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/23 13:49:39 by amagomad         ###   ########.fr       */
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
