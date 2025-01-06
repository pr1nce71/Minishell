/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:21:46 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:16:49 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strlen() function calculates the length of the string pointed to by s,
//excluding the terminating null byte ('\0').

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str1[] = "Hello, World!";
// 	char str2[] = "Goodbye!";
// 	char str3[] = "Test";
// 	char str4[] = "Example";
// 	char str5[] = "AI";
// 	printf("Length 1: %zu\n", ft_strlen(str1));
// 	printf("Length 2: %zu\n", ft_strlen(str2));
// 	printf("Length 3: %zu\n", ft_strlen(str3));
// 	printf("Length 4: %zu\n", ft_strlen(str4));
// 	printf("Length 5: %zu\n", ft_strlen(str5));
// 	return (0);
// }
