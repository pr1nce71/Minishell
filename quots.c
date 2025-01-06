/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quots.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:51:21 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 14:32:52 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static bool	check_single_quote(char **line, int *i, int *sq)
{
	(*sq)++;
	(*i)++;
	if (!line[*i])
		return (false);
	while (line[*i] && line[*i][0] != '\'')
		(*i)++;
	if (!line[*i])
		return (false);
	(*sq)++;
	return (true);
}

static bool	check_double_quote(char **line, int *i, int *dq)
{
	(*dq)++;
	(*i)++;
	if (!line[*i])
		return (false);
	while (line[*i] && line[*i][0] != '\"')
		(*i)++;
	if (!line[*i])
		return (false);
	(*dq)++;
	return (true);
}

int	close_quote(char **line)
{
	int	i;
	int	sq;
	int	dq;

	i = 0;
	sq = 0;
	dq = 0;
	while (line[i])
	{
		if (line[i][0] == '\'')
		{
			if (!check_single_quote(line, &i, &sq))
				return (1);
		}
		else if (line[i][0] == '\"')
			if (!check_double_quote(line, &i, &dq))
				return (2);
		if (line[i] != NULL)
			i++;
	}
	if (sq % 2 == 0 && dq % 2 == 0)
		return (0);
	return (3);
}
