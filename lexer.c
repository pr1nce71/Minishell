/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:50:13 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 13:50:14 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "minishell.h"

static void	copy_arv(char **line, char **tmp, int *i, int *j)
{
	int		len;
	int		start;
	char	quote_char;
	int		k;

	len = 0;
	start = *i;
	quote_char = line[*i][0];
	(*i)++;
	while (line[*i] != NULL && line[*i][0] != quote_char)
	{
		len += ft_strlen(line[*i]) + 1;
		(*i)++;
	}
	tmp[*j] = malloc(sizeof(char) * (len + 1));
	tmp[*j][0] = '\0';
	k = start + 1;
	while (k < *i)
	{
		ft_strcat(tmp[*j], line[k]);
		if (k < *i - 1)
			ft_strcat(tmp[*j], " ");
		k++;
	}
	(*j)++;
}

static int	word_count(char **line)
{
	int	i;

	i = 0;
	while (line[i] != NULL)
		i++;
	return (i);
}

void	lexer(char **line, t_env_path *env_shell)
{
	int		i;
	int		j;
	int		word;

	i = 0;
	j = 0;
	word = word_count(line);
	env_shell->pipes->arv = malloc(sizeof(char *) * (word + 1));
	while (i < word)
	{
		if (line[i][0] == '\'' || line[i][0] == '\"')
			copy_arv(line, env_shell->pipes->arv, &i, &j);
		else
		{
			env_shell->pipes->arv[j] = expand_variable(line[i], env_shell);
			i++;
		}
		j++;
	}
	env_shell->pipes->arv[j] = NULL;
	env_shell->pipes->count = j;
}
