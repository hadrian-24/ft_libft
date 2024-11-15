/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:12:09 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/15 14:57:35 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_count(char const *str, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if ((str[i] != c && (i == 0)) || str[i - 1] == c)
			res++;
		i++;
	}
	return (res);
}

size_t find_next_word(char const *s, char c, size_t *start)
{
	while (s[*start] && s[*start] == c)
		(*start)++;
	while (s[*start] && s[*start] != c)
		(*start)++;
	return (*start);
}

void	*free_array(char **array, int i)
{
	while (i > 0)
		free(array[--i]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	int				i;
	size_t	start;
	size_t	end;

	array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!s || !array)
		return (NULL);
	i = 0;
	start = 0;
	while (s[start])
	{
		while (s[start] && s[start] == c)
			start++;
		if (!s[start])
			break;
		end = find_next_word(s, c, &start);
		array[i] = ft_substr(s, start, end - start);
		if (!array[i])
			return (free_array(array, i));
		i++;
		start = end;
	}
	array[i] = NULL;
	return (array);
}
