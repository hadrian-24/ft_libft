/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadranko <jadranko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:49:23 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/14 23:09:37 by jadranko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The ft_strlcpy function copies up to size-1 characters from the source string
src to the destination buffer dest, ensures null-termination, and returns the
length of src regardless of how many characters were copied.*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
