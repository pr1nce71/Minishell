/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:13:56 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:08:51 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the last node of the list.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst ->next)
		lst = lst ->next;
	return (lst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *list = ft_lstnew("First");
// 	t_list *new1 = ft_lstnew("Second");
// 	t_list *new2 = ft_lstnew("Third");
// 	t_list *new3 = ft_lstnew("Fourth");
// 	t_list *new4 = ft_lstnew("Fifth");
// 	list->next = new1;
// 	new1->next = new2;
// 	new2->next = new3;
// 	new3->next = new4;
// 	t_list *last = ft_lstlast(list);
// 	printf("Last element: %s\n", (char *)last->content);
// 	return (0);
// }
