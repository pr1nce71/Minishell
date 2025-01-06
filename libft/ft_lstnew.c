/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:12:33 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:08:44 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized with
// the value of the parameter ’content’. The variable
// ’next’ is initialized to NULL.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node ->content = content;
	new_node ->next = NULL;
	return (new_node);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *new1 = ft_lstnew("First");
// 	t_list *new2 = ft_lstnew("Second");
// 	t_list *new3 = ft_lstnew("Third");
// 	t_list *new4 = ft_lstnew("Fourth");
// 	t_list *new5 = ft_lstnew("Fifth");
// 	printf("New node 1: %s\n", (char *)new1->content);
// 	printf("New node 2: %s\n", (char *)new2->content);
// 	printf("New node 3: %s\n", (char *)new3->content);
// 	printf("New node 4: %s\n", (char *)new4->content);
// 	printf("New node 5: %s\n", (char *)new5->content);
// 	return (0);
// }
