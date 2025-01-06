/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:14:42 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:09:00 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Adds the node ’new’ at the beginning of the list.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new ->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *list = NULL;
// 	t_list *new1 = ft_lstnew("First");
// 	t_list *new2 = ft_lstnew("Second");
// 	t_list *new3 = ft_lstnew("Third");
// 	t_list *new4 = ft_lstnew("Fourth");
// 	t_list *new5 = ft_lstnew("Fifth");
// 	ft_lstadd_front(&list, new1);
// 	ft_lstadd_front(&list, new2);
// 	ft_lstadd_front(&list, new3);
// 	ft_lstadd_front(&list, new4);
// 	ft_lstadd_front(&list, new5);
// 	printf("List after adding elements to front:\n");
// 	printf("%s\n", (char *)list->content);
// 	list = list->next;
// 	printf("%s\n", (char *)list->content);
// 	list = list->next;
// 	printf("%s\n", (char *)list->content);
// 	list = list->next;
// 	printf("%s\n", (char *)list->content);
// 	list = list->next;
// 	printf("%s\n", (char *)list->content);
// 	return (0);
// }
