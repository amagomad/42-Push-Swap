/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_6.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:29:36 by amagomad          #+#    #+#             */
/*   Updated: 2024/09/23 14:25:33 by amagomad         ###   ########.fr       */
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
			if (av[j][i] >= '0' && av[j][i] <= '9')
				i++;
			else if (av[j][i] == '-' || av[j][i] == '+')
			{
				if (i > 0 && av[j][i - 1] != ' ')
					error_handler(ps);
				if (av[j][i + 1] == '\0' || !(av[j][i + 1] >= '0'
					&& av[j][i + 1] <= '9'))
					error_handler(ps);
				i++;
			}
			else if (av[j][i] == ' ')
				i++;
			else
				error_handler(ps);
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
