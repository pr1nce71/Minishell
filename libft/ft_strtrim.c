/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:00:06 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:30:44 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a copy of
//’s1’ with the characters specified in ’set’ removed
//from the beginning and the end of the string.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	if ((NULL == s1) || (NULL == set))
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		start++;
	while (end >= 0 && ft_strchr(set, *(s1 + end)))
		end--;
	if (start > end)
		return (ft_strdup(""));
	trimmed = malloc((end - start) + 2);
	if (NULL == trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, (end - start) + 2);
	return (trimmed);
}

//rm all symb from s1 which are in "set"

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	printf("Result 1: '%s'\n", ft_strtrim("  Hello World  ", " "));
// 	printf("Result 2: '%s'\n", ft_strtrim("****Test****", "*"));
// 	printf("Result 3: '%s'\n", ft_strtrim("Example", "E"));
// 	printf("Result 4: '%s'\n", ft_strtrim("12345", "12345"));
// 	printf("Result 5: '%s'\n", ft_strtrim("abcdef", "xyz"));
// 	return (0);
// }
