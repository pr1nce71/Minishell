/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:21:54 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:09:09 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for a digit (0 through 9).

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int test_vals[] = {'0', '5', 'A', '9', ' '};
// 	int i = 0;
// 	if (ft_isdigit(test_vals[i]))
// 		printf("'%c' is a digit.\n", test_vals[i]);
// 	else
// 		printf("'%c' is not a digit.\n", test_vals[i]);
// 	i++;
// 	if (ft_isdigit(test_vals[i]))
// 		printf("'%c' is a digit.\n", test_vals[i]);
// 	else
// 		printf("'%c' is not a digit.\n", test_vals[i]);
// 	i++;
// 	if (ft_isdigit(test_vals[i]))
// 		printf("'%c' is a digit.\n", test_vals[i]);
// 	else
// 		printf("'%c' is not a digit.\n", test_vals[i]);
// 	i++;
// 	if (ft_isdigit(test_vals[i]))
// 		printf("'%c' is a digit.\n", test_vals[i]);
// 	else
// 		printf("'%c' is not a digit.\n", test_vals[i]);
// 	i++;
// 	if (ft_isdigit(test_vals[i]))
// 		printf("'%c' is a digit.\n", test_vals[i]);
// 	else
// 		printf("'%c' is not a digit.\n", test_vals[i]);
// 	return (0);
// }
