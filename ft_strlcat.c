/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:48:44 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/12 11:49:27 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dest;
	unsigned int	len_total;
	unsigned int	i;

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
