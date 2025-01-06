/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:00:14 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:05:06 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the string ’s’ to the given file descriptor
//followed by a newline.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	ft_putendl_fd("Hello", 1);
// 	ft_putendl_fd("World", 1);
// 	ft_putendl_fd("Test", 1);
// 	ft_putendl_fd("Example", 1);
// 	ft_putendl_fd("Program", 1);
// 	return (0);
// }
