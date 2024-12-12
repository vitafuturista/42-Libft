/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgalle <adrgalle@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:29:22 by adrgalle          #+#    #+#             */
/*   Updated: 2024/10/12 14:56:42 by adrgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*str2;

	len = 0;
	while (str[len] != '\0')
		len++;
	str2 = (char *)malloc((len + 1) * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	ft_strlcpy(str2, str, len + 1);
	return (str2);
}
