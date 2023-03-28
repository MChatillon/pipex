/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_prog.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:13:23 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/28 17:42:32 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exit_prog(int status, char *s)
{
	if (status)
		ft_printf("%s", s);
	if (px()->cmd)
		free_list(px()->cmd);
	exit(status);
}