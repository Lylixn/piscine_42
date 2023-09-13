/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:42:05 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/20 22:57:51 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "checker.h"
#include "comb_grid.h"

int	check_same_number(int grid[6][6], int y, int x)
{
	int	x_row;
	int	y_row;

	printf("%d", x);
	printf("%d", y);
	x_row = 1;
	while (x_row < x)
	{
		if (grid[y][x_row] == grid[y][x])
			return (0);
		x_row++;
	}
	y_row = 1;
	while (y_row < y)
	{
		if (grid[y_row][x] == grid[y][x])
			return (0);
		y_row++;
	}
	return (1);
}

int	check_row_from_left(int grid[6][6], int x)
{
	int	comp;
	int	highest;
	int	view;
	int	i;
	int	count;

	x = 1;
	count = 0;
	i = 1;
	highest = 0;
	comp = grid[x][1];
	view = grid[x][0];
	while (i < 5)
	{
		comp = grid[x][i];
		if (comp > highest)
		{
			highest = comp;
			count++;
		}
		i++;
	}
	if (view == count)
		return (1);
	else
		return (0);
}

int	check_row_from_right(int grid[6][6], int x)
{
	int	comp;
	int	highest;
	int	view;
	int	i;
	int	count;

	x += 1;
	count = 0;
	i = 5;
	highest = 0;
	comp = grid[x][5];
	view = grid[x][6];
	while (i > 0)
	{
		comp = grid[x][i];
		if (comp > highest)
		{
			highest = comp;
			count++;
		}
		i--;
	}
	if (view == count)
		return (1);
	else
		return (0);
}

int	check_col_from_top(int grid[6][6], int y)
{
	int	comp;
	int	highest;
	int	view;
	int	i;
	int	count;

	y + 1;
	count = 0;
	i = 1;
	highest = 0;
	comp = grid[1][y];
	view = grid[0][y];
	while (i < 5)
	{
		comp = grid[i][y];
		if (comp > highest)
		{
			highest = comp;
			count++;
		}
		i++;
	}
	if (view == count)
		return (1);
	else
		return (0);
}

int	check_col_from_bottom(int grid[6][6], int y)
{
	int	comp;
	int	highest;
	int	view;
	int	i;
	int	count;

	y += 1;
	count = 0;
	i = 5;
	highest = 0;
	comp = grid[5][y];
	view = grid[6][y];
	while (i > 0)
	{
		comp = grid[i][y];
		if (comp > highest)
		{
			highest = comp;
			count++;
		}
		i--;
	}
	if (view == count)
		return (1);
	else
		return (0);
}
