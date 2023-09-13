/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 02:16:32 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 17:26:07 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			print('-');
			nb *= -1;
		}
		while (nb > 9)
		{
			ft_putnbr(nb / 10);
			nb %= 10;
		}
		print(nb + 48);
	}
}
/*
#include <stdio.h>

int main(void)
{
	printf("ft_putnbr: ");
	printf("\n");
	ft_putnbr(-2147483648);
	return (0);
}
*/
