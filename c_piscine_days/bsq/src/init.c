/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:13:06 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/30 19:13:12 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	init_coords(t_size *coords, int x, int y)
{
	coords->width = x;
	coords->height = y;
}

void	init_best(t_best *best, int x, int y, int size)
{
	best->x = x;
	best->y = y;
	best->size = size;
}
