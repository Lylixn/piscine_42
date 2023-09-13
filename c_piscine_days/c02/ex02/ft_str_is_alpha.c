/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:52:22 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/21 16:08:21 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '\0')
		return (1);
	while (str[++i])
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[] = "hola";
	char	str2[] = "h0la";
	char	str3[] = "holA";
	char	str4[] = "hola ";
	char	str5[] = " hola";
	char	str6[] = "hola\n";
	char	str7[] = "hola\t";
	char	str8[] = "hola\v";
	char	str9[] = "hola\f";
	char	str10[] = "hola\r";
	char	str11[] = "hola\0";
	char	str12[] = "";

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	printf("%d\n", ft_str_is_alpha(str4));
	printf("%d\n", ft_str_is_alpha(str5));
	printf("%d\n", ft_str_is_alpha(str6));
	printf("%d\n", ft_str_is_alpha(str7));
	printf("%d\n", ft_str_is_alpha(str8));
	printf("%d\n", ft_str_is_alpha(str9));
	printf("%d\n", ft_str_is_alpha(str10));
	printf("%d\n", ft_str_is_alpha(str11));
	printf("%d\n", ft_str_is_alpha(str12));
	return (0);
}
*/
