/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:00:10 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/09 15:21:44 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	putchar_fd(char c, int fd);
int	putstr_fd(char *s, int fd);
int	putnbr_fd(int n, int fd);
int	uputnbr_fd(unsigned int n, int fd);
int	puthex_fd(unsigned long long n, int fd, int uppercase);
int	putptr_fd(void *ptr, int fd);

#endif
