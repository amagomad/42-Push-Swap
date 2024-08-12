/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:23:40 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/12 16:38:28 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int     int_checker(const char  *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_isdigit(str[i]) == 0)
        {
            ft_printf("ERROR : Argument '%s' is not an integer\n", str);
            exit(EXIT_FAILURE);
        }
        i++;
    }
    if (i == 0)
    {
        ft_printf("ERROR : Argument '%s' is empty", str);
        exit(EXIT_FAILURE);
    }
    return (0);
}

int     args_checker(int ac)
{
    if (ac < 2)
    {
        ft_printf("ERROR : At least 1 argument is required\n");
        exit(EXIT_FAILURE);
    }
    return (0);
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