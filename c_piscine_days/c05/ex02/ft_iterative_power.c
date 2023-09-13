/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:56:48 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 23:50:52 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ < power)
		res = res * nb;
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_iterative_power(2, 3));
}
*/
