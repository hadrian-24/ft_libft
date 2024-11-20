/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:06:11 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/20 18:18:07 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The `ft_calloc` function allocates memory for an array of `count` elements of
`size` bytes each and initializes all bytes to zero using `ft_memset`, returning
NULL if allocation fails.*/

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			total;

	if (!size || !count)
	{
		count = 1;
		size = 1;
	}
	else if (count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*
// gcc -g -Wall -Wextra -Werror ft_calloc.c -L. -lft -I.
void test_size_overflow(void)
{
	// Test 1: SIZE_MAX overflow
	void *p2 = ft_calloc(SIZE_MAX, SIZE_MAX);
	printf("Overflow test (SIZE_MAX, SIZE_MAX):\n");
	printf("ft_calloc:     %p\n\n", p2);
	free(p2);
}

void test_zero_values(void)
{
	// Test 2: Zero size
	void *p1 = calloc(5, 0);
	void *p2 = ft_calloc(5, 0);
	printf("Zero size test (5, 0):\n");
	printf("System calloc: %p\n", p1);
	printf("ft_calloc:     %p\n\n", p2);
	free(p1);
	free(p2);

	// Test 3: Zero count
	p1 = calloc(0, 5);
	p2 = ft_calloc(0, 5);
	printf("Zero count test (0, 5):\n");
	printf("System calloc: %p\n", p1);
	printf("ft_calloc:     %p\n", p2);
	free(p1);
	free(p2);
}

int main(void)
{
	test_size_overflow();
	test_zero_values();
	return (0);
}
*/
