/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:55:59 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/19 18:35:35 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

t_node *new_node(int data)
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
    t_pushswap  *ps;
    
    ps = malloc(sizeof(t_pushswap));
    int i;

    if (!ps)
        return NULL;
    
    ps->a = NULL;
    ps->b = NULL;

    i = 1;
    while (i < ac)
    {
        add_node_end(&ps->a, atoi(av[i]));
        i++;
    }

    return ps;
}

void add_node_end(t_node **head, int data)
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

void print_list(t_node *head)
{
    t_node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
