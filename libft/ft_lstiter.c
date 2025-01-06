/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:20:15 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:08:55 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Iterates the list ’lst’ and applies the function
//’f’ on the content of each node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	f (lst ->content);
	lst = lst ->next;
}

// #include <stdio.h>

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }
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
// 	ft_lstiter(list, print_content);
// 	return (0);
// }
