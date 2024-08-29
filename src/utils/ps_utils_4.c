/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:24:33 by amagomad          #+#    #+#             */
/*   Updated: 2024/08/27 17:27:39 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_length(const char *s, char c)
{
	size_t	length;

	length = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			length++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (length);
}

char	**ft_split(const char *s, char c)
{
	char	**final;
	size_t	len;
	int		i;

	if (!s)
		return (NULL);
	final = malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!final)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len++;
			final[i++] = ft_substr(s, 0, len);
			s += len;
		}
		else
			s++;
	}
	final[i] = NULL;
	return (final);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*z;
	size_t	i;
	size_t	j;

	z = malloc(sizeof(char *) * (len + 1));
	if (!s)
		return (0);
	i = start;
	j = 0;
	while (j < len && i < ft_strlen(s))
	{
		z[j] = s[i];
		j++;
		i++;
	}
	z[j] = '\0';
	return (z);
}

void	free_split(char **av)
{
	int		i;

	i = 0;
	while (av[i++])
		free(av[i]);
	free(av);
}

int		print_av(int ac, char **s)
{
	int		i;

	i = 1;
	while (i < ac - 1)
		ft_printf("argument number %i = %s", i, s[i]);
	return (0);
}