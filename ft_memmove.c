/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadranko <jadranko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:22:29 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/11 16:20:59 by jadranko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_temp;
	char	*src_temp;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
	{
		i = n;
		dest_temp = (char *)dest;
		src_temp = (char *)src;
		while (i-- > 0)
			dest_temp[i] = src_temp[i];
	}
	return (dest);
}