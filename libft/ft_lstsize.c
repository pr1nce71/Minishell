/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:13:20 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:08:48 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Counts the number of nodes in a list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		lst = lst ->next;
		counter++;
	}
	return (counter);
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
// 	printf("List size: %d\n", ft_lstsize(list));

// 	return (0);
// }
