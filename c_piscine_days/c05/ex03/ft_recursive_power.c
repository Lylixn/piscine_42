/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:57:38 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 23:51:12 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_recursive_power(2, 3));
}
*/
