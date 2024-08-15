/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:20:00 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/09 15:26:25 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_fd(int n, int fd)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count = putstr_fd("-2147483648", fd);
		return (count);
	}
	else
	{
		if (n < 0)
		{
			count += putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
		{
			count += putnbr_fd(n / 10, fd);
		}
		count += putchar_fd((n % 10 + '0'), fd);
	}
	return (count);
}
