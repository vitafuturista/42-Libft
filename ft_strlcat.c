/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgalle <adrgalle@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:31:50 by adrgalle          #+#    #+#             */
/*   Updated: 2024/10/06 15:06:22 by adrgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	index;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size <= size_dest)
		return (size_src + size);
	index = size_dest;
	index = 0;
	while (src[index] != '\0' && (size_dest + index) < (size - 1))
	{
		dest[index + size_dest] = src[index];
		index++;
	}
	dest[size_dest + index] = '\0';
	return (size_src + size_dest);
}
