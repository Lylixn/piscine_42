/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:37:26 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 17:25:51 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = 0;
	if (nbr == -2147483648)
		write(1, "-2147483648", 11); 
	while (base[len])
		len++;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
	}
	else
		write(1, &base[nbr], 1);
}
/*
int main(void)
{
    ft_putnbr_base(-10, "0123456789");
    return (0);
}
*/
