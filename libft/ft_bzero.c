/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:55:04 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 17:51:15 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The bzero() function erases the data in the n bytes 
//of the memory starting at the location pointed to by s,
//by writing zeros (bytes containing '\0') to that area.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
}

// #include <stdio.h>
// #include <string.h>

// void	ft_bzero(void *s, size_t n);

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	size_t i = 0;

// 	printf("Before ft_bzero: %s\n", str);
// 	ft_bzero(str + 7, 6);
// 	printf("After ft_bzero: %s\n", str);
// 	printf("After ft_bzero (as bytes): ");
// 	while (i < sizeof(str))
// 	{
// 		printf("%d ", str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
