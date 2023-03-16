/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:50:16 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/16 17:15:44 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "ft_printf.h"

typedef struct s_pipex{
	char	**cmd;
	char	*path;
	int		infile;
	int		outfile;
}t_pipex;

void	exit_prog(int status, char *s);
char	**ft_split(char **split, char *str, int count);
void	parse(char **av, char **envp);
char	*get_path(char **envp);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif