/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:36:35 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:09:03 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.

#include "libft.h"

static size_t	num_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	num;

	if (n < 0)
		num = -n;
	else
		num = n;
	len = num_len(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n == 0)
		return (ft_memcpy(str, "0", 2));
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int test_vals[] = {42, -42, 0, 12345, -9876};
// 	int i = 0;
// 	char *result;
// 	result = ft_itoa(test_vals[i]);
// 	printf("ft_itoa(%d) = %s\n", test_vals[i], result);
// 	free(result);
// 	i++;
// 	result = ft_itoa(test_vals[i]);
// 	printf("ft_itoa(%d) = %s\n", test_vals[i], result);
// 	free(result);
// 	i++;
// 	result = ft_itoa(test_vals[i]);
// 	printf("ft_itoa(%d) = %s\n", test_vals[i], result);
// 	free(result);
// 	i++;
// 	result = ft_itoa(test_vals[i]);
// 	printf("ft_itoa(%d) = %s\n", test_vals[i], result);
// 	free(result);
// 	i++;
// 	result = ft_itoa(test_vals[i]);
// 	printf("ft_itoa(%d) = %s\n", test_vals[i], result);
// 	free(result);
// 	return (0);
// }
