/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgemboadislic <zgemboadislic@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:14:21 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/18 19:29:51 by zgemboadisl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The `ft_substr` function extracts a substring of length `len` from string `s`
starting at index `start`, handling edge cases (NULL input, out-of-bounds start,
insufficient length) and returning a newly allocated string containing the
substring.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}
