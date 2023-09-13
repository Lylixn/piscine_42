/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:14:12 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/27 22:07:57 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"
#include "libft.h"
#include "math.h"
#include "print.h"
#include "reading.h"
#include <stdio.h>

void	init_and_run(int argc, char **argv, t_dict *dict)
{
	if (argc == 2)
	{
		if (ft_atoi(argv[1]) < 0)
		{
			ft_putstr("Error\n");
			dict_destroy(dict);
			return ;
		}
		init_directory(dict, "numbers.dict");
		print_with_dict(dict, argv[1]);
	}
	else if (argc == 3)
	{
		if (ft_atoi(argv[2]) < 0)
		{
			ft_putstr("Error\n");
			dict_destroy(dict);
			return ;
		}
		init_directory(dict, argv[1]);
		print_with_dict(dict, argv[2]);
	}
	else
		ft_putstr("Error\n");
}

int	main(int argc, char **argv)
{
	t_dict	*dict;

	dict = dict_create(42);
	if (dict == NULL)
	{
		ft_putstr("Error\n");
		return (0);
	}
	init_and_run(argc, argv, dict);
	if (dict != NULL)
		dict_destroy(dict);
	return (0);
}
