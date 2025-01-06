/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokens.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:51:43 by yevkahar          #+#    #+#             */
/*   Updated: 2025/01/06 13:51:44 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "minishell.h"

static t_vars	*new_list(char *arg)
{
	t_vars	*list;

	list = malloc(sizeof(t_vars));
	if (!list)
		return (NULL);
	list->length = ft_strlen(arg);
	list->type = tokens_init(arg);
	list->token = arg;
	list->next = NULL;
	return (list);
}

static void	list_add(t_vars **lst, t_vars *new)
{
	t_vars	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

void	set_prev(t_vars **list)
{
	t_vars	*tmp;

	tmp = *list;
	while (tmp)
	{
		if (tmp->next)
			tmp->next->prev = tmp;
		tmp = tmp->next;
	}
}

void	create_list(t_vars **list, char **arv)
{
	int		i;
	t_vars	*new_node;
	t_vars	*file_node;

	i = 0;
	while (arv[i])
	{
		new_node = new_list(arv[i++]);
		list_add(list, new_node);
		if (new_node->type == GREATER_THEN
			|| new_node->type == APPEND || new_node->type == LESS_THEN)
		{
			if (arv[i] == NULL)
			{
				printf("minishell: syntax error near unexpected token\n");
				return ;
			}
			file_node = new_list(arv[i++]);
			list_add(list, file_node);
		}
	}
}
