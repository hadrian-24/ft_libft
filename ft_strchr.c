/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadranko <jadranko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:23:11 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/17 01:24:47 by jadranko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strchr (string-find-character) function searches for the first
occurrence of character c in string s and returns a pointer to it, or NULL
if the character is not found (unless it's '\0', in which case it returns
a pointer to the string's terminator).*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
