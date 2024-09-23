/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_6.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:29:36 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/23 15:33:01 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	check_characters(t_pushswap *ps, char **av)
{
	int		i;
	int		j;

	j = 1;
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			if (!is_valid(av[j][i], &i))
				error_handler(ps);
			i++;
		}
		j++;
	}
}

int	check_limits(long number, int sign)
{
	if (sign == 1 && number > INT_MAX)
		return (1);
	if (sign == -1 && - number < INT_MIN)
		return (1);
	return (0);
}

void	error_handler(t_pushswap *ps)
{
	ft_printf("ERROR\n");
	free_pushswap(ps);
	exit(EXIT_FAILURE);
}

void	characters_arg(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
			i++;
		else
		{
			ft_printf("ERROR\n");
			exit(EXIT_FAILURE);
		}
	}
}

void	skip_whitespace(const char **str, long *i)
{
	while ((*str)[*i] && ((*str)[*i] == ' '
		|| ((*str)[*i] >= 9 && (*str)[*i] <= 13)))
		(*i)++;
}
