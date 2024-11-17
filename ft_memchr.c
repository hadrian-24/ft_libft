/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadranko <jadranko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:58:24 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/17 15:54:47 by jadranko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The `ft_memchr` function searches for the first occurrence of byte `c`
in the first `n` bytes of memory area `s` and returns a pointer to the
matching byte, or NULL if not found. */

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(const unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
	}
	return (NULL);
}
