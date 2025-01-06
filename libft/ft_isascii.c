/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:30:51 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:09:12 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether c is a 7-bit unsigned char value
//that fits into the ASCII character set.

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int test_vals[] = {65, 97, 128, 32, 255, 0};
// 	int i = 0;
// 	if (ft_isascii(test_vals[i]))
// 		printf("%d is an ASCII character.\n", test_vals[i]);
// 	else
// 		printf("%d is not an ASCII character.\n", test_vals[i]);
// 	i++;
// 	if (ft_isascii(test_vals[i]))
// 		printf("%d is an ASCII character.\n", test_vals[i]);
// 	else
// 		printf("%d is not an ASCII character.\n", test_vals[i]);
// 	i++;
// 	if (ft_isascii(test_vals[i]))
// 		printf("%d is an ASCII character.\n", test_vals[i]);
// 	else
// 		printf("%d is not an ASCII character.\n", test_vals[i]);
// 	i++;
// 	if (ft_isascii(test_vals[i]))
// 		printf("%d is an ASCII character.\n", test_vals[i]);
// 	else
// 		printf("%d is not an ASCII character.\n", test_vals[i]);
// 	i++;
// 	if (ft_isascii(test_vals[i]))
// 		printf("%d is an ASCII character.\n", test_vals[i]);
// 	else
// 		printf("%d is not an ASCII character.\n", test_vals[i]);
// 	i++;
// 	if (ft_isascii(test_vals[i]))
// 		printf("%d is an ASCII character.\n", test_vals[i]);
// 	else
// 		printf("%d is not an ASCII character.\n", test_vals[i]);
// 	return (0);
// }
