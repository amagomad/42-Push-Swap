/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:13:56 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/15 15:58:35 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void    push_swap()
// {
    
// }

int     main(int ac, char **av)
{
    t_pushswap *a;

    parsing(ac, a);
    ft_sort_five(a);
}