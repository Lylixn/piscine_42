/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:15:18 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/27 22:39:36 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

typedef struct t_dict_entry
{
	char	*key;
	char	*value;
}	t_dict_entry;

typedef struct t_dict
{
	int				size;
	t_dict_entry	*entries;
}	t_dict;

t_dict	*dict_create(int size)
{
	t_dict	*dict;

	dict = malloc(sizeof(t_dict));
	if (dict == NULL)
		return (NULL);
	dict->size = size;
	dict->entries = malloc(sizeof(t_dict_entry) * size);
	if (dict->entries == NULL)
	{
		free(dict);
		return (NULL);
	}
	while (size > 0)
	{
		dict->entries[size - 1].key = NULL;
		dict->entries[size - 1].value = NULL;
		size--;
	}
	return (dict);
}

void	dict_destroy(t_dict *dict)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		free(dict->entries[i].key);
		free(dict->entries[i].value);
		i++;
	}
	free(dict->entries);
	free(dict);
}

int	dict_insert(t_dict *dict, char *key, char *value)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		if (dict->entries[i].key == NULL)
		{
			dict->entries[i].key = ft_strdup(key);
			dict->entries[i].value = ft_strdup(value);
			return (1);
		}
		i++;
	}
	return (0);
}

char	*dict_search(t_dict *dict, char *key)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		if (dict->entries[i].key != NULL 
			&& ft_strcmp(dict->entries[i].key, key))
			return (dict->entries[i].value);
		i++;
	}
	return (NULL);
}
