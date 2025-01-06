/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:45:36 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 15:30:19 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_strcmp(const char *s1, const char *s2);

void	start_shell(t_env_path *env_shell)
{
	int	i;

	i = 0;
	while (ft_strncmp(env_shell->env_paths[i], "SHLVL=", 6))
		i++;
	env_shell->shelllvl = ft_strdup(env_shell->env_paths[i]);
	shell_lvl(env_shell);
}

void	shell_lvl(t_env_path *env_shell)
{
	int		lvl;
	char	*cur_lvl;
	int		i;
	char	*tmp;

	i = 0;
	cur_lvl = get_pathd(env_shell->env_paths, 6, "SHLVL=");
	while (ft_strncmp(env_shell->env_paths[i], "SHLVL=", 6))
		i++;
	lvl = ft_atoi(cur_lvl);
	lvl++;
	free(env_shell->env_paths[i]);
	tmp = ft_itoa(lvl);
	env_shell->env_paths[i] = ft_strjoin("SHLVL=", tmp);
	free(tmp);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return ;
	while (array[i])
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
	array = NULL;
}

void	exit_file(t_vars *list, t_env_path *env_shell)
{
	char	*path;
	int		lvl;
	int		j;
	char	*tmp;

	j = 0;
	while (ft_strncmp(env_shell->env_paths[j], "SHLVL=", 6))
		j++;
	path = ft_strdup(env_shell->env_paths[j]);
	lvl = ft_atoi(path + 6);
	lvl--;
	free(env_shell->env_paths[j]);
	tmp = ft_itoa(lvl);
	env_shell->env_paths[j] = ft_strjoin("SHLVL=", tmp);
	if (ft_strcmp(env_shell->env_paths[j], env_shell->shelllvl) == 0)
	{
		free(tmp);
		free(path);
		freeing(list, env_shell);
		exit(0);
	}
}
