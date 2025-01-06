/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:00:23 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:08:03 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strdup() function returns a pointer 
//to a new string which is a duplicate of the string s. 
//Memory for the new string is obtained with 
//malloc(3), and can be freed with free(3).

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *dup1 = ft_strdup("Hello");
// 	char *dup2 = ft_strdup("World");
// 	char *dup3 = ft_strdup("Test");
// 	char *dup4 = ft_strdup("Example");
// 	char *dup5 = ft_strdup("Program");
// 	printf("Duplicated string 1: %s\n", dup1);
// 	printf("Duplicated string 2: %s\n", dup2);
// 	printf("Duplicated string 3: %s\n", dup3);
// 	printf("Duplicated string 4: %s\n", dup4);
// 	printf("Duplicated string 5: %s\n", dup5);
// 	return (0);
// }
