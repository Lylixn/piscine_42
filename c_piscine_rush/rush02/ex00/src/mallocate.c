/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:36:39 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/27 22:38:45 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mallocate.h"

char	*malloc_dict_key(char *line, int i)
{
	char	*key;
	int		j;

	key = malloc(sizeof(char) * (i + 1));
	if (key == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		key[j] = line[j];
		j++;
	}
	key[j] = '\0';
	return (key);
}

char	*malloc_dict_value(char *line, int i)
{
	char	*value;
	int		j;

	value = malloc(sizeof(char) * (ft_strlen(line) - i + 1));
	if (value == NULL)
		return (NULL);
	j = 0;
	while (line[i + 1] != '\0')
	{
		value[j] = line[i + 1];
		i++;
		j++;
	}
	value[j] = '\0';
	return (value);
}
