/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:00:07 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:10:24 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// #include <unistd.h>

// void	print_char(unsigned int i, char *c)
// {
// 	write(1, c, 1);
// }

// int	main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "World";
// 	char str3[] = "Test";
// 	char str4[] = "Example";
// 	char str5[] = "Program";
// 	ft_striteri(str1, print_char);
// 	write(1, "\n", 1);
// 	ft_striteri(str2, print_char);
// 	write(1, "\n", 1);
// 	ft_striteri(str3, print_char);
// 	write(1, "\n", 1);
// 	ft_striteri(str4, print_char);
// 	write(1, "\n", 1);
// 	ft_striteri(str5, print_char);
// 	write(1, "\n", 1);
// 	return (0);
// }
