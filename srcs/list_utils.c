/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:35:29 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/28 17:44:59 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

t_list	*new_list(char **cmd)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->path = NULL;
	new->cmd = cmd;
	new->next = NULL;
	return (new);
}

void	*list_add_last(t_list **list, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*list)
	{
		*list = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

void	free_list(t_list **cmd)
{
	t_list	*tmp;

	while (*cmd)
	{
		tmp = *cmd;
		*cmd = (*cmd)->next;
		free(tmp);
	}
}