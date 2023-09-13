/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:18:26 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/28 16:19:49 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	int				*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (i);
}
