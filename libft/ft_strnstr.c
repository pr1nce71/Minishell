/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:56:30 by yevkahar          #+#    #+#             */
/*   Updated: 2024/12/02 14:05:40 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strnstr() function locates the first occurrence of the 
//null-terminated string little in the string big,
//where not more than len characters are searched.
//Characters that appear after a ‘\0’ character are not searched.
//Since the strnstr() function is a FreeBSD specific API,
//it should only be used when portability is not a concern.

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (!little[j + 1])
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("Result 1: %s\n", ft_strnstr("Hello World", "World", 11));
// 	printf("Result 2: %s\n", ft_strnstr("abcdef", "cd", 6));
// 	printf("Result 3: %s\n", ft_strnstr("abcdef", "xy", 6));
// 	printf("Result 4: %s\n", ft_strnstr("Example String", "Str", 10));
// 	printf("Result 5: %s\n", ft_strnstr("Test string", "Test", 4));
// 	return (0);
// }
