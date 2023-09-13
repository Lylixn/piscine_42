/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 01:48:51 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/10 16:55:53 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int *row)
{
	write(1, &row[0], 1);
	write(1, &row[1], 1);
	write(1, &row[2], 1);
	if (row[0] != '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	row[3];

	row[0] = '0';
	while (row[0] <= '7')
	{
		row[1] = row[0] + 1;
		while (row[1] <= '8')
		{
			row[2] = row[1] + 1;
			while (row[2] <= '9')
			{
				print(row);
				row[2]++;
			}
			row[1]++;
		}
		row[0]++;
	}
}
