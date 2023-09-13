/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:03:15 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/23 02:34:28 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_hex(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 32 || str[i] > 126)
			get_hex((signed) str[i]);
		else
			write(1, &str[i], 1);
	}
}

void	get_hex(char c)
{
	int		i;
	char	hex[3];

	i = 1;
	hex[0] = '\\';
	hex[1] = (unsigned char) c / 16;
	hex[2] = (unsigned char) c % 16;
	while (i <= 2)
	{
		if (hex[i] > 9)
			hex[i] += 87;
		else
			hex[i] += 48;
		i++;
	}
	write(1, hex, 3);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}*/
