/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:22:29 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 19:53:17 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		i2;
	char	*back;

	i = -1;
	i2 = -1;
	back = 0;
	while (str[++i] && !back)
	{
		if (str[i] == to_find[0])
		{
			back = &str[i];
			while (to_find[++i2])
			{
				if (to_find[i2] != str[i])
					back = 0;
				i++;
			}
			if (back)
			{
				return (back);
			}
		}
	}
	return ((void *) 0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Hello World!";
	char to_find[] = "World!";
	char str2[] = "Hello World!";
	char to_find2[] = "World!";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str2, to_find2));
}
*/
