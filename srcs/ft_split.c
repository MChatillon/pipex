/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:56:37 by mdoroana          #+#    #+#             */
/*   Updated: 2023/03/08 17:23:10 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**ft_split(char **split, char *str, int count)
{
	int		i;
	char	*string;

	string = NULL;
	i = -1;
	while (*str == ' ' || *str == '\t')
		str++;
	while (str[++i] != ' ' || str[++i] == '\t')
		;
	string = malloc(sizeof(char) * (str + 1));
	if (string)
	{
		split = ft_split(split, str + i, count + 1);
		string[i] = '\0';
		while (--i > -1)
			string[i] = str[i];
	}
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	split[count] = string;
	return (split);
}
