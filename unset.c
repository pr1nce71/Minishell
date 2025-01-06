/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:51:56 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 14:33:07 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	remove_environment_variable(t_env_path *env_shell, char *name)
{
	int	i;
	int	j;
	int	len;

	len = strlen(name);
	i = 0;
	while (i < env_shell->count)
	{
		if (ft_strncmp(env_shell->env_paths[i], name, len) == 0
			&& env_shell->env_paths[i][len] == '=')
		{
			free(env_shell->env_paths[i]);
			j = i;
			while (j < env_shell->count - 1)
			{
				env_shell->env_paths[j] = env_shell->env_paths[j + 1];
				j++;
			}
			env_shell->env_paths[j] = NULL;
			env_shell->count--;
			return ;
		}
		i++;
	}
}

void	execute_unset_command(char **args, t_env_path *env_shell)
{
	if (args[1] == NULL)
	{
		write(2, "unset: not enough arguments\n", 28);
		return ;
	}
	remove_environment_variable(env_shell, args[1]);
}
