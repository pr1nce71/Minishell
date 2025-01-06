/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_cpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:49:53 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 13:49:54 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minishell.h"

char	*word_cpy(char *line)
{
	int		i;
	char	*tmp;
	int		len;

	i = 0;
	len = 0;
	while (line[len] != '\'' && line[len] != '\"' && line[len] != '\n'
		&& line[len] != '\t' && line[len] != '\0' && line[len] != ' ')
		len++;
	tmp = malloc(sizeof(char) * (len + 1));
	tmp[len] = '\0';
	while (i < len)
	{
		tmp[i] = line[i];
		i++;
	}
	return (tmp);
}
