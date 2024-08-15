/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 04:35:36 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/16 17:47:45 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int nb)
{
	int	size;

	size = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		a;
	char	*final;

	a = count(n);
	final = malloc(a + 1);
	if (!final)
		return (NULL);
	final[a--] = '\0';
	if (n == 0)
	{
		final[0] = '0';
		return (final);
	}
	if (n < 0)
		final[0] = '-';
	while (n != 0)
	{
		if (final[0] == '-')
			final[a--] = '0' + -(n % 10);
		else
			final[a--] = '0' + (n % 10);
		n = n / 10;
	}
	return (final);
}
