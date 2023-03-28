/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:25:36 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/24 17:35:06 by mdoroana         ###   ########.fr       */
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

void	setcmd(char *argv, char *path)
{
	char	**cmd;
	char	*temp;
	t_pipex	*node;

	if (!argv[0])
		exit_prog("Empty cmd", 1);
	cmd = ft_split(NULL, argv, 0);
	if (!cmd)
		exit_prog("Malloc failed", 1);
	node = 
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
	setcmd(argv[2], path)
}
