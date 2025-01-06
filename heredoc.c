/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:50:07 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 13:50:08 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "minishell.h"

static void	charjoin(char **buf, char c)
{
	char	*tmp;
	char	*tmp2;

	tmp = ft_strdup(*buf);
	tmp2 = ft_calloc(2, sizeof(char));
	tmp2[0] = c;
	*buf = ft_strjoin(tmp, tmp2);
	free(tmp);
	free(tmp2);
}

void	heredoc_min(char *line)
{
	char	*buf;
	char	*file_name;
	char	*limiter;
	int		fd;

	limiter = line;
	file_name = ft_strdup(".here_doc");
	fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	while (1)
	{
		buf = readline("> ");
		charjoin(&buf, '\n');
		if (!buf)
		{
			free(buf);
			printf("ERORR WITH HEREDOC\n");
		}
		if (ft_strncmp(buf, limiter, ft_strlen(limiter)) == 0)
			break ;
		write(fd, buf, ft_strlen(buf));
		free(buf);
	}
	close(fd);
	free(file_name);
	free(buf);
}
