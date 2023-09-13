/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:16:30 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/27 22:42:56 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reading.h"

void	split_line_and_insert(t_dict *dict, char *line)
{
	int		i;
	char	*key;
	char	*value;

	i = 0;
	while (line[i] != ':')
		i++;
	key = malloc_dict_key(line, i);
	value = malloc_dict_value(line, i);
	if (key == NULL || value == NULL)
		return ;
	dict_insert(dict, key, value);
	free(key);
	free(value);
}

void	get_line_with_buff(t_dict *dict, char *buff, int i, int j)
{
	char	*line;
	int		k;

	k = 0;
	line = malloc(sizeof(char) * (j - i + 1));
	if (line == NULL)
		return ;
	while (i < j)
	{
		line[k] = buff[i];
		i++;
		k++;
	}
	line[k] = '\0';
	split_line_and_insert(dict, line);
	free(line);
}

void	fill_dict_with_buff(t_dict *dict, char *buff, int i)
{
	int		j;

	j = i;
	(void)dict;
	while (buff[i] != '\n' && buff[i] != '\0')
	{
		i++;
	}
	if (i != j)
	{
		get_line_with_buff(dict, buff, j, i);
		fill_dict_with_buff(dict, buff, i + 1);
	}
}

void	init_directory(t_dict *dict, char *path)
{
	char	buff[30000];
	int		fd;
	int		reader;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	reader = read(fd, buff, 30000);
	if (reader == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	buff[reader] = '\0';
	fill_dict_with_buff(dict, buff, 0);
	close(fd);
}
