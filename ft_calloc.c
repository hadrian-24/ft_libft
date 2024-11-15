/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:06:11 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/15 12:06:30 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The `ft_calloc` function allocates memory for an array of `count` elements of
`size` bytes each and initializes all bytes to zero using `ft_memset`, returning
NULL if allocation fails.*/

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			total;

	total = count * size;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, total);
	return (tmp);
}
