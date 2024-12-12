/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgalle <adrgalle@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:14:54 by adrgalle          #+#    #+#             */
/*   Updated: 2024/10/12 19:22:35 by adrgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *substring_creator(const char **s, char c)
{
	const char	*start;
	char		*substring;
	int		len;

	start = *s;
	len = 0;

	while (*start == c)
		start++;
	*s = start;
	while (start[len] != '\0' && start[len] != c)
		len++;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, start, len + 1);
	*s = start + len;
	return (substring);
}

static int count_substrings(const char *s, char c)
{
	int	count;
	int	in_substring;
	int	index;

	count = 0;
	index = 0;
	in_substring = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && in_substring == 0)
		{	
			count++;
			in_substring = 1;
		}
		else if (s[index] == c)
			in_substring = 0;
		index++;
	}
	return count;
}

char	**ft_split(char const *s, char c)
{
	int	n_substrings;
	char	**array;
	int	index;

	index = 0;
	n_substrings = count_substrings(s, c);
	array = (char **)malloc((n_substrings + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);

	while (index < n_substrings)
	{
		array[index] = substring_creator(&s, c);
		if (array[index] == NULL)
		{
			while (index > 0)
				free(array[--index]);
			free(array);
			return (NULL);
		}
		index++;
	}
	array[index] = NULL;
	return (array);
}
