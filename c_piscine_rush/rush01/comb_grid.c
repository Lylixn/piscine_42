/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:40:24 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/20 16:39:29 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comb_grid.h"
#include "utils.h"

// fusion arg grid and critary into dest
void	grid_fusion(int grid[4][4], int critary[4][4], int dest[6][6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			if (i == 0 && (j > 0 && j < 5))
				dest[i][j] = critary[0][j - 1];
			else if (i == 5 && (j > 0 && j < 5))
				dest[i][j] = critary[1][j - 1];
			else if (j == 0 && (i > 0 && i < 5))
				dest[i][j] = critary[2][i - 1];
			else if (j == 5 && (i > 0 && i < 5))
				dest[i][j] = critary[3][i - 1];
			else if (i > 0 && i < 5 && j > 0 && j < 5)
				dest[i][j] = grid[i - 1][j - 1];
			else
				dest[i][j] = -1;
			j++;
		}
		i++;
	}
}

// print grid
void	print_comb_grid(int grid[6][6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			ft_putchar(grid[i][j] + '0');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
