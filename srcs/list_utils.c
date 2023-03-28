/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:35:29 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/24 17:41:27 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

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
