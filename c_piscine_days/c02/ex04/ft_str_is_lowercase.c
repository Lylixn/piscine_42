/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:58:29 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/21 16:11:17 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '\0')
		return (1);
	while (str[++i])
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char test[] = "hola";
	char test2[] = "h0la";
	char test3[] = "holA";

	printf("%d\n", ft_str_is_lowercase(test));
	printf("%d\n", ft_str_is_lowercase(test2));
	printf("%d\n", ft_str_is_lowercase(test3));
	return (0);
}
*/
