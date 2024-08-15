/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:17:37 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/03 20:12:30 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
