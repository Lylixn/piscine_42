/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:18:00 by mmorot            #+#    #+#             */
/*   Updated: 2023/08/30 19:27:03 by mmorot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	map_error(t_map *map)
{
	write(1, "map error\n", 10);
	map->height = -1;
	return (1);
}

t_size	size_init(char *content)
{
	t_size	size;
	int		i;

	if (content == ((void *)0))
	{
		size.height = -1;
		size.width = -1;
		return (size);
	}
	size.height = ft_atoi(content);
	i = 4 + ft_intlen(size.height);
	size.width = ft_strlen_to(content + i, '\n');
	return (size);
}

t_map	*get_params(char *content, int *i)
{
	char	empty;
	char	obstacle;
	char	full;
	t_map	*map;
	t_size	size;

	*i = 0;
	while (content[*i] && content[*i] != '\n')
		(*i)++;
	if ((*i) >= 4)
	{
		full = content[--(*i)];
		content[*i] = '\0';
		obstacle = content[--(*i)];
		content[*i] = '\0';
		empty = content[--(*i)];
		content[*i] = '\0';
		(*i) += 3;
		size = size_init(content);
		map = map_create(size, empty, obstacle, full);
		if (empty == obstacle || empty == full || obstacle == full)
			map_error(map);
		return (map);
	}
	return (map_create(size_init((void *)0), 'x', 'x', 'x'));
}

t_map	*check_map(char *content)
{
	int		i;
	int		j[2];
	t_map	*map;

	map = get_params(content, &i);
	if (map->height == -1)
		return (map);
	j[0] = 0;
	j[1] = 0;
	content = content + i;
	i = 0;
	while (++content && j[0] < map->height)
	{
		if (content[0] == '\n' && ++j[0])
		{
			if (j[1] != i && j[1] && map_error(map))
				break ;
			j[1] = i;
			i = 0;
			continue ;
		}
		map_insert(map, i, j[0], content[0]);
		i++;
	}
	return (map);
}
