/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:00:09 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:06:15 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the string ’s’ to the given file
//descriptor.

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	ft_putstr_fd("Hello", 1);
// 	ft_putstr_fd("World", 1);
// 	ft_putstr_fd("Test", 1);
// 	ft_putstr_fd("Example", 1);
// 	ft_putstr_fd("Program", 1);
// 	return (0);
// }
