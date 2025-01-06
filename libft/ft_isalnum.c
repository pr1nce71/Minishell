/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:26:54 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:09:20 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for an alphanumeric character;
//it is equivalent to (isalpha(c) || isdigit(c)).

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char test_chars[] = {'A', 'z', '5', '@', ' ', '9', 'b'};
// 	int i = 0;
// 	if (ft_isalnum(test_chars[i]))
// 		printf("'%c' is alphanumeric.\n", test_chars[i]);
// 	else
// 		printf("'%c' is not alphanumeric.\n", test_chars[i]);
// 	i++;
// 	if (ft_isalnum(test_chars[i]))
// 		printf("'%c' is alphanumeric.\n", test_chars[i]);
// 	else
// 		printf("'%c' is not alphanumeric.\n", test_chars[i]);
// 	i++;
// 	if (ft_isalnum(test_chars[i]))
// 		printf("'%c' is alphanumeric.\n", test_chars[i]);
// 	else
// 		printf("'%c' is not alphanumeric.\n", test_chars[i]);
// 	i++;
// 	if (ft_isalnum(test_chars[i]))
// 		printf("'%c' is alphanumeric.\n", test_chars[i]);
// 	else
// 		printf("'%c' is not alphanumeric.\n", test_chars[i]);
// 	i++;
// 	if (ft_isalnum(test_chars[i]))
// 		printf("'%c' is alphanumeric.\n", test_chars[i]);
// 	else
// 		printf("'%c' is not alphanumeric.\n", test_chars[i]);
// 	i++;
// 	if (ft_isalnum(test_chars[i]))
// 		printf("'%c' is alphanumeric.\n", test_chars[i]);
// 	else
// 		printf("'%c' is not alphanumeric.\n", test_chars[i]);
// 	i++;
// 	if (ft_isalnum(test_chars[i]))
// 		printf("'%c' is alphanumeric.\n", test_chars[i]);
// 	else
// 		printf("'%c' is not alphanumeric.\n", test_chars[i]);
// 	return (0);
// }
