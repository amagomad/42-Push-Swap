/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 03:20:54 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/16 17:47:35 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;
	char	*char_ptr;
	size_t	i;

	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if ((int)nmemb < 0 || (int)size < 0)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	char_ptr = (char *)ptr;
	i = 0;
	while (i < total_size)
	{
		char_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
