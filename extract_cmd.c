/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:46:23 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 15:30:29 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_strcmp(const char *s1, const char *s2);

char	*get_cmd(char **path, char *cmd)
{
	char	*tmp;
	char	*command;

	tmp = NULL;
	command = NULL;
	while (*path)
	{
		if (ft_strcmp(cmd, "./minishell") == 0)
			return (cmd);
		tmp = ft_strjoin(*path, "/");
		command = ft_strjoin(tmp, cmd);
		free(tmp);
		if (access(command, 0) == 0)
			return (command);
		free(command);
		path++;
	}
	return (NULL);
}

char	**extract_cmd(char *cmd, char *path)
{
	char	*command;
	char	**tmp;

	command = NULL;
	tmp = NULL;
	if (!path || !cmd)
		return (NULL);
	tmp = ft_split(path, ':');
	command = get_cmd(tmp, cmd);
	free_array(tmp);
	tmp = malloc(sizeof(char *) * 2);
	tmp[0] = command;
	tmp[1] = NULL;
	return (tmp);
}
