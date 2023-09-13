/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:24:30 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 17:26:01 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	is_negative;
	int	res;

	i = 0;
	is_negative = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' 
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * is_negative);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("ft_atoi: ");
	printf("%d", ft_atoi("  -234"));
	printf("\n");
	printf("atoi: ");
	printf("%d", atoi("  -234"));
	return (0);
}
*/
