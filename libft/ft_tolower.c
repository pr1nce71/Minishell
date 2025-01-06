/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:34:24 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:28:10 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Result 1: %c\n", ft_tolower('A'));
// 	printf("Result 4: %c\n", ft_tolower('a'));
// 	printf("Result 5: %c\n", ft_tolower('1'));
// 	return (0);
// }
