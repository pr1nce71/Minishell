/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:35:03 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:12:10 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strlcat() function appends the NUL-terminated
//string src to the end of dst.
//It will append at most size- strlen(dst) - 1 bytes,
//NUL-terminating the result.

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	deslen;
	unsigned int	srlen;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	deslen = i;
	srlen = ft_strlen(src);
	if (size == 0 || size <= deslen)
		return (size + srlen);
	while (src[j] != '\0' && j < size - deslen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (deslen + srlen);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest1[50] = "Hello";
// 	char src1[] = " World";
// 	char dest2[50] = "Hi";
// 	char src2[] = " there!";
// 	char dest3[50] = "Foo";
// 	char src3[] = "Bar";
// 	char dest4[50] = "Apple";
// 	char src4[] = " Pie";
// 	char dest5[50] = "Open";
// 	char src5[] = "AI";
// 	ft_strlcat(dest1, src1, 20);
// 	ft_strlcat(dest2, src2, 15);
// 	ft_strlcat(dest3, src3, 10);
// 	ft_strlcat(dest4, src4, 25);
// 	ft_strlcat(dest5, src5, 30);
// 	printf("Result 1: %s\n", dest1);
// 	printf("Result 2: %s\n", dest2);
// 	printf("Result 3: %s\n", dest3);
// 	printf("Result 4: %s\n", dest4);
// 	printf("Result 5: %s\n", dest5);
// 	return (0);
// }
