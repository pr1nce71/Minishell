/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:56:17 by yevkahar          #+#    #+#             */
/*   Updated: 2024/12/02 14:20:57 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strncmp() function compares only the first (at most) n bytes of s1 and s2.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n -1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Test 1: %d\n", ft_strncmp("Hello", "Hello", 5));
// 	printf("Test 2: %d\n", ft_strncmp("Hello", "Hellp", 5));
// 	printf("Test 3: %d\n", ft_strncmp("Hello", "Hell", 5));
// 	printf("Test 4: %d\n", ft_strncmp("Hello", "Hello", 3));
// 	printf("Test 5: %d\n", ft_strncmp("Hello", "world", 3));
// 	return (0);
// }
