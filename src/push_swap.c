/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:13:56 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/23 14:10:08 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(int ac, t_pushswap *ps)
{
	if (ac > 2)
		algo(ac, ps);
	else
		exit(EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
	t_pushswap	*ps;
	int			i;

	i = 0;
	if (ac == 1)
		exit(EXIT_SUCCESS);
	if (ac == 2)
	{
		characters_arg(av[1]);
		av = check_split(av);
		ac = 0;
		while (av[i++])
			ac++;
	}
	if (ac > 1)
		check_characters(NULL, av);
	ps = init_pushswap(ac, av);
	if (!ps || !ps->a)
		error_handler(ps);
	if (ac < 3)
		exit(EXIT_FAILURE);
	assign_index(ps, ac);
	push_swap(ac, ps);
	if (i > 0)
		free_split(av);
}
