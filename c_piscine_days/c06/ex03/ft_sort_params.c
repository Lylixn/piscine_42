/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:13:46 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/23 19:24:15 by lguerra          ###   ########.fr       */
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

void	order_by_ascii(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (argv[i][0] < argv[j][0])
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	order_by_ascii(argc, argv);
	while (--argc > 0)
	{
		ft_putstr(argv[argc]);
		ft_putchar('\n');
	}
	return (0);
}
