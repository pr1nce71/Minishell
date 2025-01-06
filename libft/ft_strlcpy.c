/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:35:00 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:15:38 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strlcpy() function copies up to size - 1 characters from the
//NUL-terminated string src to dst, NUL-termi‐nating the result.

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest1[50];
// 	char src1[] = "Hello, World!";
// 	char dest2[50];
// 	char src2[] = "Goodbye!";
// 	char dest3[50];
// 	char src3[] = "Test";
// 	char dest4[50];
// 	char src4[] = "Example";
// 	char dest5[50];
// 	char src5[] = "AI";
// 	ft_strlcpy(dest1, src1, 20);
// 	ft_strlcpy(dest2, src2, 8);
// 	ft_strlcpy(dest3, src3, 5);
// 	ft_strlcpy(dest4, src4, 10);
// 	ft_strlcpy(dest5, src5, 6);
// 	printf("Result 1: %s\n", dest1);
// 	printf("Result 2: %s\n", dest2);
// 	printf("Result 3: %s\n", dest3);
// 	printf("Result 4: %s\n", dest4);
// 	printf("Result 5: %s\n", dest5);
// 	return (0);
// }
