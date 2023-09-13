/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:05:54 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/20 15:05:10 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "arg.h"
#include "utils.h"

// remove spaces from the str passed in the argv
void	remove_spaces(char str[31])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
}

// check if the str passed in the argv is valid
int	check_arg(char str[16])
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '1' || str[i] > '4')
			return (0);
		i++;
	}
	return (1);
}
