/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:44:32 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 13:44:35 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	init_path(char **env, t_env_path *env_shell)
{
	char	**tmp;
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (env[count])
		count++;
	tmp = (char **)malloc(sizeof(char *) * (count + 1));
	if (!tmp)
		ft_error_exit("malloc");
	while (i < count)
	{
		tmp[i] = ft_strdup(env[i]);
		i++;
	}
	tmp[i] = NULL;
	env_shell->count = count;
	env_shell->env_paths = tmp;
	env_shell->last = 0;
	env_shell->pipes = malloc(sizeof(t_pipes));
	if (!env_shell->pipes)
		ft_error_exit("malloc");
}
