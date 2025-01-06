/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:00:15 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:08:35 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memcmp() function compares the first n bytes 
//(each interpreted as unsigned char) of the memory areas s1
//and s2.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
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
