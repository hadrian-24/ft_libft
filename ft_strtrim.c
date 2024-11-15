/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadranko <jadranko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:52:31 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/14 21:56:29 by jadranko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The ft_strtrim function removes characters in set from both the beginning and
end of string s1 by finding the first non-matching character from the start and
last non-matching character from the end, then returning a new substring
containing the trimmed result.*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
