/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:44:52 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 23:50:03 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 0;
	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (fact);
	while (i++ <= nb - 1)
		fact = fact * i;
	return (fact);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(10));
	return (0);
}
*/
