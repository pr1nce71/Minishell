/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:45:13 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 13:45:16 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_env(t_env_path *ep)
{
	int	i;

	i = 0;
	while (ep->env_paths[i])
	{
		ft_putstr_fd(ep->env_paths[i++], 1);
		ft_putchar_fd('\n', 1);
	}
}

void	ft_pwd(t_env_path *ep)
{
	char	*pwd;

	pwd = get_pathd(ep->env_paths, 4, "PWD=");
	ft_putstr_fd(pwd, 1);
	ft_putchar_fd('\n', 1);
}
