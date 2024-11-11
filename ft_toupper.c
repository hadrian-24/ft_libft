/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:00:22 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/11 12:04:02 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return ((unsigned char)c - 32);
	return ((unsigned char)c);
}