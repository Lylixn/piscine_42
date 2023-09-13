/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:24:37 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/27 22:39:39 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include <stdlib.h>
# include "libft.h"

typedef struct t_dict_entry	t_dict_entry;
typedef struct t_dict		t_dict;
t_dict	*dict_create(int size);
void	dict_destroy(t_dict *dict);
int		dict_insert(t_dict *dict, char *key, char *value);
char	*dict_search(t_dict *dict, char *key);

#endif
