/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:46:06 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/23 13:45:33 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	**allocate_final_array(int size)
{
	char	**final;

	final = malloc(sizeof(char *) * (size + 1));
	if (!final)
		return (NULL);
	final[0] = "./push_swap";
	return (final);
}

char	*allocate_word(const char *av, int i, int j)
{
	char	*word;
	int		k;

	k = 0;
	word = malloc(sizeof(char) * (j + 1));
	if (!word)
		return (NULL);
	while (k < j)
	{
		word[k] = av[i + k];
		k++;
	}
	word[k] = '\0';
	return (word);
}

void	fill_final_array(char **final, const char *av, int *i, int *arg)
{
	int		j;

	while (av[*i] != '\0')
	{
		while (av[*i] == ' ' && av[*i])
			(*i)++;
		if (av[*i] == '\0')
			break ;
		j = 0;
		while (av[*i + j] && av[*i + j] != ' ')
			j++;
		final[*arg] = allocate_word(av, *i, j);
		if (!final[*arg])
		{
			free_split(final);
			exit(EXIT_FAILURE);
			return ;
		}
		*i += j;
		(*arg)++;
	}
	final[*arg] = NULL;
}

