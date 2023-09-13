/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 01:04:24 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/11 02:50:19 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	swap;

	i = 0;
	x = 0;
	while (i < size)
	{
		x = 0;
		while (x < size)
		{
			if (tab[i] <= tab[x])
			{
				swap = tab[i];
				tab[i] = tab[x];
				tab[x] = swap;
			}
			x++;
		}
		i++;
	}
}
