/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadranko <jadranko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:13:30 by jadranko          #+#    #+#             */
/*   Updated: 2024/11/15 22:28:28 by jadranko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// cc ft_split_test.c -L. -lft -I./libft.h -o ft_split_test

int main(void)
{
    char *str1 = "Hello,World,How,Are,You";
    char *str2 = "   split   this  for   me  ";
    char *str3 = "no delimiter here";
    char *str4 = ",,multiple,,empty,,fields,,";
    char **result;
    int i;

    // Test 1: Split by comma
    printf("\nTest 1: Split by comma\n");
    result = ft_split(str1, ',');
    i = 0;
    while (result[i])
    {
        printf("[%s]\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    // Test 2: Split by space
    printf("\nTest 2: Split by space\n");
    result = ft_split(str2, ' ');
    i = 0;
    while (result[i])
    {
        printf("[%s]\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    // Test 3: No delimiter
    printf("\nTest 3: No delimiter\n");
    result = ft_split(str3, 'x');
    i = 0;
    while (result[i])
    {
        printf("[%s]\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    // Test 4: Multiple empty fields
    printf("\nTest 4: Multiple empty fields\n");
    result = ft_split(str4, ',');
    i = 0;
    while (result[i])
    {
        printf("[%s]\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return (0);
}