/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:05:36 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/16 16:19:10 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void make_bigger(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper(*c);
}

cc -Wall -Wextra -Werror ft_striteri.c -L. -lft -o test_striteri

int	main(void)
{
	char book[] = "Our special crayon that makes letters bigger";
	ft_striteri(book, &make_bigger);
	printf("%s\n", book);
	
	return (0);
}*/
