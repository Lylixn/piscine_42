/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:41:46 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/20 21:39:30 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "grid.h"
#include "arg.h"
#include "comb_grid.h"
#include "solver.h"

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	grid[4][4];
	int	comb_grid[6][6];

	if (argc != 2)
		return (0);
	remove_spaces(argv[1]);
	if (check_arg(argv[1]) == 0)
	{
		return (0);
	}
	fill_grid(tab, argv[1]);
	fill_grid(grid, "0000000000000000");
	grid_fusion(grid, tab, comb_grid);
	solve(comb_grid, 0);
	print_comb_grid(comb_grid);
	return (1);
}
