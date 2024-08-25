/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_tree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:37:29 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 19:34:38 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_pushswap *ps)
{
	int	first;
	int	second;
	int	third;

	if (!ps || !ps->a || !ps->a->next || !ps->a->next->next)
		return ;
	first = ps->a->data;
	second = ps->a->next->data;
	third = ps->a->next->next->data;
	if (first > second && second < third && first < third)
		sa(ps);
	else if (first > second && second > third && first > third)
	{
		sa(ps);
		rra(ps);
	}
	else if (first > second && second < third && first > third)
		ra(ps);
	else if (first < second && second > third && first < third)
	{
		sa(ps);
		ra(ps);
	}
	else if (first < second && second > third && first > third)
		rra(ps);
}

void	sort_four(t_pushswap *ps)
{
	int	i;

	i = find_min_position(ps->a);
	if (i > 0)
	{
		while (i > 0)
		{
			ra(ps);
			i--;
		}
	}
	pb(ps);
	sort_three(ps);
	pa(ps);
}

void	sort_five(t_pushswap *ps)
{
	int	min_pos;
	int	i;

	i = 0;
	while (i < 2)
	{
		min_pos = find_min_position(ps->a);
		if (min_pos > 0)
		{
			while (min_pos > 0)
			{
				ra(ps);
				min_pos--;
			}
		}
		pb(ps);
		i++;
	}
	sort_three(ps);
	pa(ps);
	pa(ps);
}

void	sort_small(int ac, t_pushswap *ps)
{
	if (ac - 1 == 3)
        sort_three(ps);
    else if (ac - 1 == 4)
        sort_four(ps);
    else if (ac - 1 == 5)
        sort_five(ps);
}

void sort_with_selection(t_pushswap *ps)
{
    int size;
    int min_pos;

    size = get_stack_size(ps->a);
    while (size > 0)
    {
        min_pos = find_min_position(ps->a);
        if (min_pos <= size / 2)
        {
            while (min_pos-- > 0)
                ra(ps);
        }
        else
        {
            while (min_pos++ < size)
                rra(ps);
        }
        pb(ps);
        size--;
    }
    while (ps->b)
        pa(ps);
}
