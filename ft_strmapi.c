/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:41:57 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/16 15:59:23 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	make_bigger(unsigned int i, char letter)
{
	if (i % 2 == 0 && ft_isalpha(letter))
		return (ft_toupper(letter));
	return (letter);
}

int	main(void)
{
	char *book = "Our special crayon that makes letters bigger";
	char *colored = ft_strmapi(book, make_bigger);
	
	printf("Before: %s\n", book);
	printf("After:  %s\n", colored);
	
	free(colored);
	return (0);
}*/
