/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:50:16 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/28 16:09:05 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "ft_printf.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_pipex{
	char	**cmd;
	char	*path;
	int		infile;
	int		outfile;
}t_pipex;

typedef struct s_list
{
	char			**cmd;
	char			*path;
	struct s_list	*next;
}t_list;

// Pipex functions

void	exit_prog(int status, char *s);
char	**ft_split(char **split, char *str, int count);
void	parse(char **av, char **envp);
char	*get_path(char **envp);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
t_pipex	*px(void);

// List funtions
void	*list_add_last(t_list **list, t_list *new);
t_list	*new_list(char **cmd);

#endif