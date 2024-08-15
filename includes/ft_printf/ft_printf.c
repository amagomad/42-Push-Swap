/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 22:00:58 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/09 15:26:11 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(va_list args, const char *format, int *i)
{
	int	count;

	count = 0;
	if (format[*i] == 'd' || format[*i] == 'i')
		count += putnbr_fd(va_arg(args, int), 1);
	else if (format[*i] == 's')
		count += putstr_fd(va_arg(args, char *), 1);
	else if (format[*i] == 'c')
		count += putchar_fd((char)va_arg(args, int), 1);
	else if (format[*i] == 'u')
		count += uputnbr_fd(va_arg(args, unsigned int), 1);
	else if (format[*i] == 'x' || format[*i] == 'X')
		count += puthex_fd(va_arg(args, unsigned int), 1, format[*i] == 'X');
	else if (format[*i] == 'p')
		count += putptr_fd(va_arg(args, void *), 1);
	else if (format[*i] == '%')
		count += putchar_fd('%', 1);
	return (count);
}

static int	print_format(va_list args, const char *format)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += handle_format(args, format, &i);
		}
		else
			count += putchar_fd(format[i], 1);
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);
	va_list	args;
	int		count;

	va_start(args, format);
	count = print_format(args, format);
	va_end(args);
	return (count);
}
