/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:26:58 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/20 22:37:56 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

int	check_same_number(int grid[6][6], int y, int x);
int	check_row_from_left(int grid[6][6], int x);
int	check_row_from_right(int grid[6][6], int x);
int	check_col_from_top(int grid[6][6], int y);
int	check_col_from_bottom(int grid[6][6], int y);

#endif
