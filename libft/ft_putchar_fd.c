/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:00:17 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:04:33 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the character ’c’ to the given file
// descriptor.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	ft_putchar_fd('A', 1);
// 	ft_putchar_fd('B', 1);
// 	ft_putchar_fd('C', 1);
// 	ft_putchar_fd('D', 1);
// 	ft_putchar_fd('E', 1);
// 	return (0);
// }
