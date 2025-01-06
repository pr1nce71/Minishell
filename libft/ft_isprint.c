/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:25:24 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:09:06 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for any printable character including space.

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int test_vals[] = {'A', 'z', '5', '@', ' '};
// 	int i = 0;
// 	if (ft_isprint(test_vals[i]))
// 		printf("'%c' is printable.\n", test_vals[i]);
// 	else
// 		printf("'%c' is not printable.\n", test_vals[i]);
// 	i++;
// 	if (ft_isprint(test_vals[i]))
// 		printf("'%c' is printable.\n", test_vals[i]);
// 	else
// 		printf("'%c' is not printable.\n", test_vals[i]);
// 	i++;
// 	if (ft_isprint(test_vals[i]))
// 		printf("'%c' is printable.\n", test_vals[i]);
// 	else
// 		printf("'%c' is not printable.\n", test_vals[i]);
// 	i++;
// 	if (ft_isprint(test_vals[i]))
// 		printf("'%c' is printable.\n", test_vals[i]);
// 	else
// 		printf("'%c' is not printable.\n", test_vals[i]);
// 	i++;
// 	if (ft_isprint(test_vals[i]))
// 		printf("'%c' is printable.\n", test_vals[i]);
// 	else
// 		printf("'%c' is not printable.\n", test_vals[i]);
// 	return (0);
// }
