/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgalle <adrgalle@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:31:40 by adrgalle          #+#    #+#             */
/*   Updated: 2024/10/06 17:57:53 by adrgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	index;

	index = 0;
	while (index < size)
	{
		if (s1[index] == '\0')
			return ((unsigned char)s1[index] -(unsigned char)s2[index]);
		else if (s2[index] == '\0')
			return ((unsigned char)s1[index] -(unsigned char)s2[index]);
		if (s1[index] != s2[index])
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		index++;
	}
	return (0);
}
