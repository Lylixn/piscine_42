/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:54:12 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/21 16:09:57 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '\0')
		return (1);
	while (str[++i])
	{
		if (str[i] < 48 || str[i] > 58)
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[] = "1234";
	char	str2[] = "12 34";
	char	str3[] = "12.34";
	char	str4[] = "12,34";
	char	str5[] = "12-34";
	char	str6[] = "12+34";

	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
	printf("%d\n", ft_str_is_numeric(str4));
	printf("%d\n", ft_str_is_numeric(str5));
	printf("%d\n", ft_str_is_numeric(str6));
}
*/
