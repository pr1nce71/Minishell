/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:46:39 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 14:32:17 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_exit(t_vars *list, t_env_path *env_shell)
{
	int		i;

	i = 0;
	while (env_shell->env_paths[i] != NULL)
	{
		free(env_shell->env_paths[i]);
		i++;
	}
	ft_listclear(&list);
}
