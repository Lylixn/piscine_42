/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:54:50 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/27 22:41:47 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	print_search(t_dict *dict, char *nbr)
{
	char	*str;

	str = dict_search(dict, nbr);
	if (str)
	{
		ft_putstr(str);
		ft_putstr(" ");
	}
}

void	print_number(t_dict *dict, int nbr)
{
	char	*str_temp;

	str_temp = ft_itoa(nbr);
	print_search(dict, str_temp);
	free(str_temp);
}

void	print_three_number(t_dict *dict, int nbr, int index)
{
	int	power;

	nbr += 0;
	power = ft_power(10, index);
	if (nbr / 100 != 0)
	{
		print_number(dict, nbr / 100);
		print_search(dict, "100");
	}
	if (nbr % 100 != 0)
	{
		if (nbr % 100 <= 20)
			print_number(dict, nbr % 100);
		else
		{
			if (nbr % 100 / 10 * 10 != 0)
				print_number(dict, nbr % 100 / 10 * 10);
			if (nbr % 100 % 10 != 0)
				print_number(dict, nbr % 100 % 10);
		}
	}
	if (power != 1)
		print_number(dict, power);
}

void	print_with_dict(t_dict *dict, char *str)
{
	int		i;
	int		len;
	int		nbr;
	int		split_nbr;

	len = ft_strlen(str);
	nbr = ft_atoi(str);
	i = len - 1;
	if (nbr == 0)
	{
		print_number(dict, 0);
		return ;
	}
	while (i >= 0)
	{
		if (i % 3 == 0)
		{
			split_nbr = nbr / ft_power(10, i);
			print_three_number(dict, split_nbr, i);
			nbr = nbr % ft_power(10, i);
		}
		i--;
	}
}
