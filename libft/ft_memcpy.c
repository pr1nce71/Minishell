/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:59:34 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:08:32 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memcpy() function copies n bytes from memory area src to memory area dest.
//The memory areas must not
//overlap. Use memmove(3) if the memory areas do overlap.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL & src == NULL)
		return (0);
	i = -1;
	while (++i < n)
		((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char src[] = "Hello, World!";
// 	char dest[50];
// 	ft_memcpy(dest, src, 13);
// 	printf("After ft_memcpy: %s\n", dest);
// 	ft_memcpy(dest, src + 7, 6);
// 	printf("After ft_memcpy: %s\n", dest);
// 	ft_memcpy(dest, src, 5);
// 	dest[5] = '\0';
// 	printf("After ft_memcpy: %s\n", dest);
// 	ft_memcpy(dest, src + 7, 0);
// 	printf("After ft_memcpy: %s\n", dest);
// 	ft_memcpy(dest, src + 5, 7);
// 	printf("After ft_memcpy: %s\n", dest);
// 	return (0);
// }
