/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:00:02 by yevkahar          #+#    #+#             */
/*   Updated: 2024/12/02 14:29:04 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function f to each character of the
// string s, passing its index as the first argument
// and the character itself as the second. A new
// string is created (using malloc(3)) to collect the
// results from the successive applications of f.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(void)
// {
// 	char *result1 = ft_strmapi("hello", upper_case);
// 	char *result2 = ft_strmapi("world", upper_case);
// 	char *result3 = ft_strmapi("test", upper_case);
// 	char *result4 = ft_strmapi("example", upper_case);
// 	char *result5 = ft_strmapi("program", upper_case);
// 	printf("Result 1: %s\n", result1);
// 	printf("Result 2: %s\n", result2);
// 	printf("Result 3: %s\n", result3);
// 	printf("Result 4: %s\n", result4);
// 	printf("Result 5: %s\n", result5);
// 	free(result1);
// 	free(result2);
// 	free(result3);
// 	free(result4);
// 	free(result5);
// 	return (0);
// }
