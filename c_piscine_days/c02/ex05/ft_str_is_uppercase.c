/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:00:40 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/21 16:12:02 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '\0')
		return (1);
	while (str[++i])
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char test[] = "HOLA";
	char test2[] = "H0LA";
	char test3[] = "holA";

	printf("%d\n", ft_str_is_uppercase(test));
	printf("%d\n", ft_str_is_uppercase(test2));
	printf("%d\n", ft_str_is_uppercase(test3));
	return (0);
}
*/
