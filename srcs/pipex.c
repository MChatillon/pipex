/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:02:12 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/24 16:59:29 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

t_pipex	*pipe(void)
{
	static t_pipex	pipex;

	return (&pipe);
}

int	main(int ac, char **av, char **envp)
{
	if (ac != 5)
		exit_prog(1, "Wrong number of arguments");
	parse;
	return (0);
}
