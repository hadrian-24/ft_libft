/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:04:37 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/11 12:05:42 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return ((unsigned char)c + 32);
	return ((unsigned char)c);
}