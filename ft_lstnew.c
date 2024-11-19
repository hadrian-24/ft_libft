/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabarisi <jabarisi@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:04:10 by jabarisi          #+#    #+#             */
/*   Updated: 2024/11/18 23:06:57 by jabarisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
// gcc -Wall -Wextra -Werror ft_lstnew.c -L. -lft -I. && ./a.out
int main(void)
{
	// Test 1: Integer content
	int num = 42;
	t_list *node1 = ft_lstnew(&num);
	printf("Test 1 - Integer:\n");
	printf("Node created: %s\n", node1 ? "YES" : "NO");
	printf("Content: %d\n", *(int*)node1->content);
	printf("Next: %p\n\n", (void*)node1->next);

	// Test 2: String content
	char *str = "Hello World";
	t_list *node2 = ft_lstnew(str);
	printf("Test 2 - String:\n");
	printf("Node created: %s\n", node2 ? "YES" : "NO");
	printf("Content: %s\n", (char*)node2->content);
	printf("Next: %p\n\n", (void*)node2->next);

	// Test 3: NULL content
	t_list *node3 = ft_lstnew(NULL);
	printf("Test 3 - NULL content:\n");
	printf("Node created: %s\n", node3 ? "YES" : "NO");
	printf("Content: %p\n", node3->content);
	printf("Next: %p\n", (void*)node3->next);

	// Clean up
	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/