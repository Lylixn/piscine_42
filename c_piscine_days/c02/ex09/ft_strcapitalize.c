/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:21:35 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/23 18:51:47 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str, int i)
{
	while (str[++i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
	}
	return (str);
}

int	check_type(char c)
{
	if (c > 47 && c < 58)
		return (1);
	else if ((c > 64 && c < 90) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	ft_strlowcase(str, -1);
	while (str[++i])
		if (str[i] > 96 && str[i] < 123 && !check_type(str[i - 1]))
			str[i] -= 32;
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
}*/
