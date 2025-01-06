/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   built-ins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:43:35 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 13:43:57 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	is_builtin_command(char *command)
{
	return (ft_strcmp(command, "cd") == 0 || ft_strcmp(command, "echo") == 0
		|| ft_strcmp(command, "export") == 0 || ft_strcmp(command, "unset") == 0
		|| ft_strcmp(command, "pwd") == 0 || ft_strcmp(command, "env") == 0);
}

void	handle_builtin_command(t_vars *list, t_env_path *env_shell)
{
	if (ft_strcmp(list->token, "cd") == 0)
		change_dir(env_shell, list);
	else if (ft_strcmp(list->token, "echo") == 0)
		echo(&list);
	else if (ft_strcmp(list->token, "export") == 0)
		execute_export_command(env_shell->pipes->arv, env_shell);
	else if (ft_strcmp(list->token, "unset") == 0)
		execute_unset_command(env_shell->pipes->arv, env_shell);
	else if (ft_strcmp(list->token, "pwd") == 0)
		ft_pwd(env_shell);
	else if (ft_strcmp(list->token, "env") == 0)
		ft_env(env_shell);
}

void	check_heredoc(t_env_path *env_shell)
{
	int	i;

	i = 0;
	while (env_shell->pipes->arv[i])
	{
		if (ft_strcmp(env_shell->pipes->arv[i], "<<") == 0)
		{
			heredoc_min(env_shell->pipes->arv [i + 1]);
			env_shell->pipes->arv[i] = ".here_doc";
			env_shell->pipes->arv[i + 1] = " ";
			break ;
		}
		i++;
	}
	return ;
}

void	execom(t_vars *list, t_env_path *env_shell)
{
	pid_t	pid;
	int		status;

	if (env_shell->pipes-> arv[0] == NULL)
		return ;
	else if (is_builtin_command(list->token))
		handle_builtin_command(list, env_shell);
	else
	{
		pid = fork();
		if (pid < 0)
			perror("fork");
		else if (pid == 0)
		{
			setup_redirections(env_shell->pipes->arv);
			command_to_do(list, env_shell);
			exit(EXIT_SUCCESS);
		}
		else
			waitpid(pid, &status, 0);
	}
}
