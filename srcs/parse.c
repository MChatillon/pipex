/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:25:36 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/16 17:41:18 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*get_path(char **envp)
{
	int	i;

	i = -1;
	while (envp[++1])
		if (!strncmp(envp[i], "PATH=", 5))
			return (envp[i] + 5);
	return (NULL);
}

void	parse(char **av, char **envp)
{
	char	*path;
	int		i;

	i = -1;
	path = NULL;
	while (envp[++i])
	{
		path = get_path(envp[i]);
		if (path)
			break ;
	}
	if (!path)
		exit_prog(1, "Incorrect path");

}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s)
		i++;
	return (i);
}