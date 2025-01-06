/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:34:38 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:08:23 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memset() function fills the first n bytes of the memory
//area pointed to by s with the constant byte c.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len--)
		*tmp++ = (unsigned char)c;
	return (b);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[50] = "Hello, World!";
// 	ft_memset(str, 'x', 5);
// 	printf("After ft_memset: %s\n", str);
// 	ft_memset(str + 7, 'y', 6);
// 	printf("After ft_memset: %s\n", str);
// 	ft_memset(str, 'a', 0);
// 	printf("After ft_memset: %s\n", str);
// 	ft_memset(str + 5, 'z', 2);
// 	printf("After ft_memset: %s\n", str);
// 	ft_memset(str + 2, 'b', 3);
// 	printf("After ft_memset: %s\n", str);
// 	return (0);
// }
