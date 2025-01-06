/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:00:09 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:08:39 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  memchr()  function scans the initial n bytes of the memory area
//pointed to by s for the first instance of c.
//Both c and the bytes of the memory area pointed
//to by s are interpreted as unsigned char.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	char *result;
// 	result = ft_memchr(str, 'o', 13);
// 	if (result)
// 		printf("Found 'o' at position: %ld\n", result - str);
// 	else
// 		printf("'o' not found.\n");
// 	result = ft_memchr(str, 'W', 13);
// 	if (result)
// 		printf("Found 'W' at position: %ld\n", result - str);
// 	else
// 		printf("'W' not found.\n");
// 	result = ft_memchr(str, 'z', 13);
// 	if (result)
// 		printf("Found 'z' at position: %ld\n", result - str);
// 	else
// 		printf("'z' not found.\n");
// 	result = ft_memchr(str, 'H', 13);
// 	if (result)
// 		printf("Found 'H' at position: %ld\n", result - str);
// 	else
// 		printf("'H' not found.\n");
// 	result = ft_memchr(str, ',', 13);
// 	if (result)
// 		printf("Found ',' at position: %ld\n", result - str);
// 	else
// 		printf("',' not found.\n");
// 	return (0);
// }
