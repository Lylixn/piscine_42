/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 00:24:10 by mmorot            #+#    #+#             */
/*   Updated: 2023/08/30 05:13:24 by mmorot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*add_content(char *content, char buffer[BUFFER])
{
	char	*tmp;
	int		file_len;
	int		buffer_len;

	file_len = 0;
	if (content != ((void *)0))
		file_len = ft_strlen(content);
	buffer_len = ft_strlen(buffer);
	tmp = (char *)malloc(sizeof(char) * (file_len + buffer_len + 1));
	if (!tmp)
	{
		if (content != ((void *)0))
			free(content);
		return ((void *)0);
	}
	tmp[0] = '\0';
	if (content != ((void *)0))
	{
		ft_strcat(tmp, content);
		free(content);
	}
	ft_strcat(tmp, buffer);
	return (tmp);
}

void	reset_buffer(char *buffer)
{
	int	i;

	i = -1;
	while (++i < BUFFER)
		buffer[i] = '\0';
}

char	*get_file_content(int file)
{
	char	buffer[BUFFER];
	int		nb_read;
	char	*content;

	content = NULL;
	nb_read = 1;
	while (nb_read > 0)
	{
		reset_buffer(buffer);
		nb_read = read(file, buffer, BUFFER - 1);
		if (nb_read == -1)
			break ;
		if (nb_read > 0)
		{
			content = add_content(content, buffer);
			if (content == ((void *)0))
				return ((void *)0);
		}
	}
	if (nb_read == -1 && content != ((void *)0))
	{
		free(content);
		return ((void *)0);
	}
	return (content);
}

char	*file_parsing(char *path)
{
	char	*content;
	int		fd;
	int		res;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return ((void *)0);
	content = get_file_content(fd);
	res = close(fd);
	if (content == ((void *)0))
		return ((void *)0);
	if (res == -1)
	{
		free(content);
		return ((void *)0);
	}
	return (content);
}
