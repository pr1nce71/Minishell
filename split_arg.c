/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:51:38 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 14:33:00 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	word(char **tmp, char **line, int *i)
{
	tmp[*i] = word_cpy(*line);
	(*i)++;
	while (**line != '\'' && **line != '\"' && **line != '\n'
		&& **line != '\t' && **line != '\0' && **line != ' ')
	{
		++(*line);
	}
}

static void	kostil(char *line)
{
	while (*line != '\'' && *line != '\"' && *line != '\0')
		line++;
	if (*line == '\'' || *line == '\"')
		line++;
}

static void	kostil2(char **tmp, char *line, int i, int j)
{
	while (*line != '\0')
	{
		if (*line == '\'' || *line == '\"')
		{
			tmp[i] = quote(line);
			if (!tmp[i])
			{
				while (j < i)
					free(tmp[j++]);
				return ;
			}
			i++;
			line++;
			kostil(line);
			continue ;
		}
		word(tmp, &line, &i);
		while (*line == ' ' || *line == '\t' || *line == '\n')
			line++;
	}
}

void	init_word(char **tmp, char *line)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*line == ' ' || *line == '\t' || *line == '\n')
		line++;
	kostil2(tmp, line, i, j);
}

char	**split_arg(char *line)
{
	char	**tmp;
	int		word_count;

	word_count = count(line);
	tmp = malloc(sizeof(char *) * (word_count + 1));
	if (!tmp)
		return (NULL);
	init_word(tmp, line);
	tmp[word_count] = NULL;
	return (tmp);
}
