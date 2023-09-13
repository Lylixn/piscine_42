/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocate.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:35:21 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/27 22:38:58 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOCATE_H
# define MALLOCATE_H

# include <stdlib.h>
# include "libft.h"

char	*malloc_dict_key(char *line, int i);
char	*malloc_dict_value(char *line, int i);

#endif
