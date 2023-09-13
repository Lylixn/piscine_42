/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:42:30 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/29 17:44:55 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_size(int min, int max)
{
	int	i;
	int	count;

	i = min;
	while (i++ <= max)
		count++;
	return (count);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	i = -1;
	size = get_size(min, max);
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (++i < size)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;
	int	min;
	int	max;

	min = 0;
	max = 10;
	arr = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
 */