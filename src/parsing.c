/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:23:40 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/16 13:12:57 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void     int_checker(t_pushswap *a)
{
    int         i;
    char        *str;
    t_node      *current;

    i = 0;
    current = a;
    while (current->next != NULL)
    {
        i = ft_isdigit(current->data);
        if (i == 0)
        {
            ft_printf("ERROR : Argument '%s' is not an integer\n", current->data);
            exit(EXIT_FAILURE);
        }
        current = current->next;
    }
}

void     args_checker(int ac)
{
    if (ac < 4)
    {
        ft_printf("ERROR : At least 3 argument is required\n");
        exit(EXIT_FAILURE);
    }
}

void    parsing(int ac, t_pushswap *ps)
{
    args_checker(ac);
    int_checker(ps);
}

// t_node*    new_node(int data)
// {
//     t_node* new;

//     new = malloc(sizeof(t_node));
//     if (new == NULL)
//     {
//         ft_printf("ERROR : Memory allocation failed\n");
//         return ;
//     }
//     new->data = data;
//     new->next = NULL;
//     return (new);
// }