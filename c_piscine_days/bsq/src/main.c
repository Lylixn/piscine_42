/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 01:55:11 by mmorot            #+#    #+#             */
/*   Updated: 2023/08/30 20:05:53 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*content;
	t_map	*map;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			content = file_parsing(argv[i]);
			map = check_map(content);
			map_resolve(map);
			print_map(map, PRINT_MAP);
			map_destroy(map);
			if (argc > 2)
				write(1, "\n", 1);
		}
	}
	return (0);
}
