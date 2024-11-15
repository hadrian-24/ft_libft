/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadranko <jadranko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:06:11 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/14 23:39:54 by jadranko         ###   ########.fr       */
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

	if (count != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, count * size);
	return (tmp);
}
