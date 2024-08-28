/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:13:56 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/27 17:35:52 by amagomad         ###   ########.fr       */
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

	if (ac == 2)
	    av = check_split(av);
	ps = init_pushswap(ac, av);
	if (!ps || !ps->a)
	{
		ft_printf("ERROR : Failed allocation\n");
		exit(EXIT_FAILURE);
	}
	assign_index(ps, ac);
	push_swap(ac, ps);
}
