/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_resolve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:26:38 by mmorot            #+#    #+#             */
/*   Updated: 2023/08/30 19:26:40 by mmorot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	square_valid(t_map *map, int x, int y, int size)
{
	int			x1;
	int			y1;
	t_map_entry	*entry;

	x1 = x;
	while (x1 <= x + size)
	{
		y1 = y;
		while (y1 <= y + size)
		{
			entry = get_map_entry(map, x1, y1);
			if (entry->algo < 0)
				return (0);
			y1++;
		}
		x1++;
	}
	return (1);
}

int	draw_square(t_map *map, int x, int y, int size)
{
	int			x1;
	int			y1;
	t_map_entry	*entry;

	x1 = x;
	while (x1 < x + size)
	{
		y1 = y;
		while (y1 < y + size)
		{
			entry = get_map_entry(map, x1, y1);
			entry->show = map->full;
			y1++;
		}
		x1++;
	}
	return (1);
}

void	check_if_square(t_map *map,
						struct s_size *coords,
						struct s_best *best,
						int current_size)
{
	while (coords->width + ++current_size < map->width
		&& coords->height + current_size < map->height
		&& square_valid(map, coords->width, coords->height, current_size))
	{
		if (best->size < current_size + 1)
		{
			best->size = current_size + 1;
			best->x = coords->width;
			best->y = coords->height;
		}
	}
}

int	map_resolve(t_map *map)
{
	struct s_size	coords;
	struct s_best	best;
	int				current_size;

	init_coords(&coords, 0, 0);
	init_best(&best, 0, 0, 0);
	current_size = 0;
	while (coords.height < map->width)
	{
		if (map->height - coords.height < best.size && coords.height++)
			continue ;
		coords.width = 0;
		while (coords.width < map->width)
		{
			if (map->width - coords.width < best.size && coords.width++)
				continue ;
			check_if_square(map, &coords, &best, current_size);
			current_size = 0;
			coords.width++;
		}
		coords.height++;
	}
	draw_square(map, best.x, best.y, best.size);
	return (1);
}
