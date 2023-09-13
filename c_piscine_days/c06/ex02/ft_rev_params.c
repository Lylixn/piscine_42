/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:11:39 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/23 19:13:10 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	if (argc < 2)
		return (0);
	while (--i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
