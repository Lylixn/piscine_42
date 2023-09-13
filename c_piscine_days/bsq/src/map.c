/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:52:53 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/30 18:30:36 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// create the map
t_map	*map_create(t_size size, char empty, char obstacle, char full)
{
	t_map	*map;
	int		i;

	i = 0;
	map = malloc(sizeof(t_map));
	map->entries = malloc(sizeof(t_map_entry) * (size.height * size.width));
	while (i < size.width * size.height)
	{
		map->entries[i].set = 0;
		i++;
	}
	map->empty = empty;
	map->obstacle = obstacle;
	map->full = full;
	map->height = size.height;
	map->width = size.width;
	return (map);
}

// destroy the map and free the memory
void	map_destroy(t_map *map)
{
	free(map->entries);
	free(map);
}

// insert a case in the map at the position x, y
int	map_insert(t_map *dict, int x, int y, char base)
{
	int			i;

	i = 0;
	while (i < (dict->height * dict->width))
	{
		if (dict->entries[i].set == 0)
		{
			dict->entries[i].set = 1;
			dict->entries[i].x = x;
			dict->entries[i].y = y;
			dict->entries[i].show = base;
			if (base == dict->empty)
				dict->entries[i].algo = EMPTY;
			else if (base == dict->obstacle)
				dict->entries[i].algo = OBSTACLE;
			else
				dict->entries[i].algo = UNKNOWN;
			dict->entries[i].base = base;
			return (1);
		}
		i++;
	}
	return (0);
}

// get a case in the map at the position x, y
t_map_entry	*get_map_entry(t_map *map, int x, int y)
{
	int	i;

	i = 0;
	while (i < (map->height * map->width))
	{
		if (map->entries[i].x == x && map->entries[i].y == y)
			return (&map->entries[i]);
		i++;
	}
	return (0);
}

// get 3x3 case at x and y in the map
t_map_entry	**get_around_index(t_map *map, int x, int y)
{
	t_map_entry	**entries;

	entries = malloc(sizeof(t_map_entry *) * 9);
	entries[0] = get_map_entry(map, x - 1, y - 1);
	entries[1] = get_map_entry(map, x, y - 1);
	entries[2] = get_map_entry(map, x + 1, y - 1);
	entries[3] = get_map_entry(map, x - 1, y);
	entries[4] = get_map_entry(map, x, y);
	entries[5] = get_map_entry(map, x + 1, y);
	entries[6] = get_map_entry(map, x - 1, y + 1);
	entries[7] = get_map_entry(map, x, y + 1);
	entries[8] = get_map_entry(map, x + 1, y + 1);
	return (entries);
}
