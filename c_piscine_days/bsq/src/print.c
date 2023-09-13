/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:45:48 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/30 19:10:35 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_map(t_map *map, enum e_print_type type)
{
	t_map_entry	*entry;
	int			x;
	int			y;

	x = -1;
	y = -1;
	while (++y < map->height)
	{
		while (++x < map->width)
		{
			entry = get_map_entry(map, x, y);
			if (type == PRINT_MAP)
				write(1, &entry->show, 1);
			else if (type == PRINT_ALGO)
				write(1, &entry->algo, 1);
			else if (type == PRINT_BASE)
				write(1, &entry->base, 1);
		}
		write(1, "\n", 1);
		x = -1;
	}
}
