/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:18:53 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 17:51:17 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  atoi() function converts the initial portion 
//of the string pointed to by nptr to int.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *s = "   -01234506789ab567";
// 	printf("%d", ft_atoi(s));
// }
