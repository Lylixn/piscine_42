/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:29:32 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/20 16:39:23 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "utils.h"

void	fill_grid(int grid[4][4], char *table)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			grid[i][j] = table[k] - '0';
			j++;
			k += 1;
		}
		j = 0;
		i++;
	}
}

void	print_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putnbr(grid[i][j]);
			if (j != 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
