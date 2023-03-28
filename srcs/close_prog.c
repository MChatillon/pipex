/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_prog.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:13:23 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/24 17:11:09 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exit_prog(int status, char *s)
{
	if (status)
		ft_prinft("%s", s);
	exit(status);
}