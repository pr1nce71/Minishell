/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:00:12 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:05:42 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the integer ’n’ to the given file
// descriptor.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	ft_putnbr_fd(42, 1);
// 	ft_putnbr_fd(-42, 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putnbr_fd(12345, 1);
// 	ft_putnbr_fd(-9876, 1);
// 	return (0);
// }
