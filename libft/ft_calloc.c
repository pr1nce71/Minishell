/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:59:55 by yevkahar          #+#    #+#             */
/*   Updated: 2024/11/28 17:58:58 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The calloc() function allocates memory for an array of nmemb elements
//of size bytes each and returns a pointer to the allocated memory.
//The memory is set to zero. If nmemb or size is 0,
//then calloc() returns either NULL, or a unique pointer value
//that can later be successfully passed to free().

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;
	size_t	i;

	total_size = num * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
		((unsigned char *)ptr)[i++] = 0;
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>

// void	*ft_calloc(size_t num, size_t size);

// int	main(void)
// {
// 	size_t	num = 5;
// 	size_t	size = sizeof(int);
// 	int		*array;
// 	size_t	i = 0;
// 	array = (int *)ft_calloc(num, size);
// 	if (!array)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	printf("Allocated and zero-initialized array:\n");
// 	while (i < num)
// 	{
// 		printf("array[%zu] = %d\n", i, array[i]);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }
