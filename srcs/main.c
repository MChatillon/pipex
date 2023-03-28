/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:02:12 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/28 17:57:59 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int ac, char **av, char **envp)
{
	int	pipe_fd[2];

	if (ac != 5)
		exit_prog(1, "Wrong number of arguments");
	parse(av, envp);
	if (pipe(pipe_fd) == -1)
		exit_prog(1, "Pipe error");
	return (0);
}
