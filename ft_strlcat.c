/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:48:44 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/15 12:09:43 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The `ft_strlcat` function safely concatenates a source string (`src`) onto
the end of a destination string (`dest`) within a size-limited buffer, returning
the total length the combined string would have been while ensuring
null-termination and preventing buffer overflows. */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	len_total;
	size_t	i;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	len_total = len_dest + len_src;
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	while (src[i] && len_dest < (size - 1))
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (len_total);
}
