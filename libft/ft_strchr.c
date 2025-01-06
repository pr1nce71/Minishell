/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:55:47 by yevkahar          #+#    #+#             */
/*   Updated: 2024/12/02 13:48:44 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strchr() function returns a pointer to the first 
//occurrence of the character c in the string s.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	char *result;
// 	result = ft_strchr(str, 'o');
// 	if (result)
// 		printf("Found 'o': %s\n", result);
// 	else
// 		printf("'o' not found.\n");
// 	result = ft_strchr(str, 'W');
// 	if (result)
// 		printf("Found 'W': %s\n", result);
// 	else
// 		printf("'W' not found.\n");
// 	result = ft_strchr(str, 'z');
// 	if (result)
// 		printf("Found 'z': %s\n", result);
// 	else
// 		printf("'z' not found.\n");
// 	result = ft_strchr(str, 'H');
// 	if (result)
// 		printf("Found 'H': %s\n", result);
// 	else
// 		printf("'H' not found.\n");
// 	result = ft_strchr(str, ',');
// 	if (result)
// 		printf("Found ',': %s\n", result);
// 	else
// 		printf("',' not found.\n");
// 	return (0);
// }
