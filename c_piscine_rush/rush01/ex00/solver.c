/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:46:46 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/20 22:54:39 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "solver.h"
#include "checker.h"

int	check(int grid[6][6], int row, int col)
{
	if (check_row_from_left(grid, row))
		return (0);
	/*if (!check_row_from_right(grid, row))
		return (0);*/
	if (check_col_from_top(grid, col))
		return (0);
	/*if (!check_col_from_bottom(grid, col))
		return (0);*/
	return (1);
}

int	solve(int grid[6][6], int pos)
{
	int	i;
	int	row;
	int	col;

	row = (pos / 4) + 1;
	col = (pos % 4) + 1;
	if (pos == 16)
		return (1);
	i = 1;
	while (i <= 4)
	{
		if (check_same_number(grid, col, row))
		{
			grid[row][col] = i;
			printf("grid[%d][%d] = %d\n", row, col, grid[row][col]);
			if (check(grid, row, col))
				if (solve(grid, pos + 1))
					return (1);
		}
		i++;
	}
	grid[row][col] = 0;
	return (0);
}
