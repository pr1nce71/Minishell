/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:09:28 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/26 14:07:59 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer.

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_w;

	count = 0;
	in_w = 0;
	while (*s)
	{
		if (*s != c && in_w == 0)
		{
			in_w = 1;
			count++;
		}
		else if (*s == c)
			in_w = 0;
		s++;
	}
	return (count);
}

static size_t	len_word(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}
// len of word till sepa

static char	*allocated_word(const char **s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	while (**s == c)
		(*s)++;
	len = len_word(*s, c);
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = **s;
		(*s)++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_all(char **array, size_t index)
{
	while (index > 0)
		free(array[--index]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	char	**result;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		result[i] = allocated_word(&s, c);
		if (!result[i])
			return (free_all(result, i));
		i++;
	}
	result[i] = NULL;
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>
// void	print_split(char **split)
// {
//     if (!split)
//     {
//         printf("Split returned NULL.\n");
//         return;
//     }

//     int i = 0;
//     while (split[i])
//     {
//         printf("split[%d]: %s\n", i, split[i]);
//         i++;
//     }
//     printf("Total strings: %d\n", i);

//     i = 0;
//     while (split[i])
//         free(split[i++]);
//     free(split);
// }
// int main(void)
// {
//     char *test1 = "Hello, world! Welcome to 42.";
//     char *test2 = "   Split this string	into	words!   ";
//     char *test3 = ";;;;;;";
//     char *test4 = "";
//     char *test5 = NULL;

//     printf("Test 1:\n");
//     print_split(ft_split(test1, ' '));

//     printf("\nTest 2:\n");
//     print_split(ft_split(test2, ' '));

//     printf("\nTest 3:\n");
//     print_split(ft_split(test3, ';'));

//     printf("\nTest 4:\n");
//     print_split(ft_split(test4, ' '));

//     printf("\nTest 5:\n");
//     print_split(ft_split(test5, ' '));

//     return 0;
// }
