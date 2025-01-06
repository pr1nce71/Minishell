/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:56:26 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:21:26 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strrchr() function returns a pointer to the last
//occurrence of the character c in the string s.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("Result 1: %s\n", ft_strrchr("Hello World", 'o'));
// 	printf("Result 2: %s\n", ft_strrchr("abcdef", 'c'));
// 	printf("Result 3: %s\n", ft_strrchr("abcdef", 'x'));
// 	printf("Result 4: %s\n", ft_strrchr("Test string", 't'));
// 	printf("Result 5: %s\n", ft_strrchr("Example", 'e'));
// 	return (0);
// }
