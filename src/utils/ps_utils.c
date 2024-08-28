/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:55:59 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/27 17:17:09 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_min_position(t_node *a)
{
	int		value;
	int		pos;
	int		i;
	t_node	*current;

	if (!a)
		return (-1);
	pos = 0;
	i = 0;
	value = a->index;
	current = a;
	while (current)
	{
		if (current->index < value)
		{
			value = current->index;
			pos = i;
		}
		current = current->next;
		i++;
	}
	return (pos);
}

t_pushswap	*init_pushswap(int ac, char **av)
{
	t_pushswap	*ps;
	int			i;
	int			value;
	int			check_dup;

	i = 1;
	ps = (t_pushswap *)malloc(sizeof(t_pushswap));
	if (!ps)
		return (NULL);
	ps->a = NULL;
	ps->b = NULL;
	while (i < ac)
	{
		value = ft_atoi(av[i]);
		check_dup = contains_duplicate(ps->a, value);
		if (check_dup == 1)
		{
			ft_printf("ERROR: Duplicate found\n");
			free_pushswap(ps);
			exit(EXIT_FAILURE);
		}
		add_node_end(&ps->a, value);
		i++;
	}
	return (ps);
}

void	add_node_end(t_node **head, int data)
{
	t_node	*new;
	t_node	*temp;

	temp = *head;
	new = malloc(sizeof(t_node));
	if (!new)
		return ;
	new->data = data;
	new->index = -1;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return ;
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;
}

void	assign_index(t_pushswap *ps, int ac)
{
	int		index;
	int		end;
	t_node	*current;

	if (!ps || !ps->a)
		return ;

	end = 1;
	current = ps->a;
	while (current && end < ac)
	{
		index = index_finder(ps, current->data);
		current->index = index;
		current = current->next;
		end++;
	}
}


int	index_finder(t_pushswap *ps, int nu)
{
	int		index;
	t_node	*current;

	index = 0;
	current = ps->a;
	while (current)
	{
		if (nu >= current->data)
			index++;
		current = current->next;
	}
	return (index);
}
