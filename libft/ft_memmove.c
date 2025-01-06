/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:35:08 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 18:08:27 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memmove() function copies n bytes from memory area
//src to memory area dest.
//The memory areas may over‐lap: copying takes place
//as though the bytes in src are first copied
//into a temporary array that  does  not overlap src or dest,
//and the bytes are then copied from the temporary array to dest.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	if (tmp_dest == tmp_src)
		return (dest);
	else if (tmp_dest < tmp_src)
	{
		while (n--)
			*tmp_dest++ = *tmp_src++;
	}
	else
	{
		tmp_dest += n - 1;
		tmp_src += n - 1;
		while (n--)
			*tmp_dest-- = *tmp_src--;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char src[] = "Hello, World!";
// 	char dest[50];
// 	ft_memmove(dest, src, 13);
// 	printf("After ft_memmove: %s\n", dest);
// 	ft_memmove(dest + 7, src + 7, 6);
// 	printf("After ft_memmove: %s\n", dest);
// 	ft_memmove(dest, src, 5);
// 	dest[5] = '\0';
// 	printf("After ft_memmove: %s\n", dest);
// 	ft_memmove(dest, src + 5, 0);
// 	printf("After ft_memmove: %s\n", dest);
// 	ft_memmove(dest, src + 5, 7);
// 	printf("After ft_memmove: %s\n", dest);
// 	return (0);
// }
