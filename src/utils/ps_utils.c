/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:55:59 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 19:51:13 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int     find_min_position(t_node *a)
{
    int     value;
    int     pos;
    int     i;
    t_node  *current;

    if(!a)
        return (-1);
    pos = 0;
    i = 0;
    value = a->data;
    current = a;
    while (current)
    {
        if (current->data < value)
        {
            value = current->data;
            pos = i;
        }
        current = current->next;
        i++;
    }
    return (pos);
}

t_node      *new_node(int data)
{
    t_node  *node;
    
    node = malloc(sizeof(t_node));
    if (!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}

t_pushswap *init_pushswap(int ac, char **av)
{
    t_pushswap *ps;
    int i;
    int value;

    i = 1;
    ps = (t_pushswap *)malloc(sizeof(t_pushswap));
    if (!ps)
        return NULL;
    ps->a = NULL;
    ps->b = NULL;
    while (i < ac)
    {
        value = ft_atoi(av[i]);
        if (contains_duplicate(ps->a, value))
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


void    add_node_end(t_node **head, int data)
{
    t_node  *new;
    t_node  *temp;

    new = new_node(data);
    temp = *head;
    if (!new)
        return ;
    if (!*head)
    {
        *head = new;
        return;
    }
    while (temp->next)
        temp = temp->next;
    temp->next = new;
}

void    print_list(t_node *head)
{
    t_node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    ft_printf("NULL\n");
}
