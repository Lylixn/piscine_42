/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:54:07 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 23:50:28 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	facto;

	facto = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (facto);
	facto = nb * ft_recursive_factorial(nb - 1);
	return (facto);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(10));
}
*/
