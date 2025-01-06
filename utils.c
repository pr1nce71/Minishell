/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:52:01 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 15:24:24 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int ft_strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char	*get_pathm(char **end)
{
	while (ft_strncmp("PATH", *end, 4))
		end++;
	return (*end + 5);
}

char	*get_pathd(char **end, int i, char *cmd)
{
	while (ft_strncmp(cmd, *end, i))
		end++;
	return (*end + i);
}

int	lenpath(char *arv)
{
	int	len;

	len = 0;
	while (arv[len])
		len++;
	return (len);
}

int	lencat(char *arv, int len_path)
{
	int	len;

	len = 0;
	while (arv[len_path] != '/')
	{
		len_path--;
		len++;
	}
	return (len);
}

void	ft_listclear(t_vars **head)
{
	t_vars	*current;
	t_vars	*next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
