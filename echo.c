/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:44:24 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 13:44:27 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	skip_spaces(t_vars **tmp)
{
	if (!(*tmp))
		return ;
	while (*tmp)
	{
		if ((*tmp)->token[0] == ' ')
			*tmp = (*tmp)->next;
		else
			break ;
	}
}

static int	check_n(t_vars **str)
{
	int	i;

	i = 0;
	if (!*str)
		return (0);
	if ((*str)->token[0] == '-')
		i++;
	while ((*str)->token[i])
	{
		if ((*str)->token[i] == 'n')
			i++;
		else
			return (0);
	}
	*str = (*str)->next;
	return (1);
}

void	echo2(t_vars **tmp)
{
	printf("%s", (*tmp)->token);
	*tmp = (*tmp)->next;
}

void	echo(t_vars **lst)
{
	int		nl;
	t_vars	*tmp;

	nl = 1;
	tmp = *lst;
	if (tmp->next)
	{
		tmp = tmp->next;
		skip_spaces(&tmp);
		if (check_n(&tmp))
			nl = 0;
		skip_spaces(&tmp);
		while (tmp)
		{
			echo2(&tmp);
			if (!tmp || (tmp->type != WORD && tmp->type != SPACE_T))
				break ;
		}
	}
	if (nl == 1)
		printf("\n");
}
