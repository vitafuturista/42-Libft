/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgalle <adrgalle@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:27:44 by adrgalle          #+#    #+#             */
/*   Updated: 2024/10/12 13:45:37 by adrgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	index;
	size_t	index2;

	index = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (str[index] != '\0' && index < len)
	{
		index2 = 0;
		while (str[index + index2] == to_find[index2] && (index + index2) < len)
		{
			if (to_find[index2 + 1] == '\0')
				return ((char *)&str[index]);
			index2++;
		}
		index++;
	}
	return (NULL);
}
