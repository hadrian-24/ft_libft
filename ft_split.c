/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:12:09 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/16 12:30:24 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	res;
	size_t	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			res++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (res);
}

static size_t	word_len(const char *s, size_t start, char c)
{
	size_t	len;

	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	return (len);
}

static void	*free_array(char **array, int i)
{
	while (i > 0)
		free(array[--i]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;
	size_t	i;
	size_t	start;
	size_t	len;

	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array || !s)
		return (NULL);
	i = 0;
	start = 0;
	while (i < words)
	{
		while (s[start] && s[start] == c)
			start++;
		len = word_len(s, start, c);
		array[i] = ft_substr(s, start, len);
		if (!array[i])
			return (free_array(array, i));
		start += len;
		i++;
	}
	array[i] = NULL;
	return (array);
}
