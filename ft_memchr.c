/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgalle <adrgalle@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:02:08 by adrgalle          #+#    #+#             */
/*   Updated: 2024/10/06 18:22:58 by adrgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_str;
	size_t			index;

	ptr_str = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (ptr_str[index] == (unsigned char)c)
			return (&ptr_str[index]);
		index++;
	}
	return (NULL);
}
