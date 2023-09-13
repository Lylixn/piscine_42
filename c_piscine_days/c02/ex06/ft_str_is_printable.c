/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:01:57 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/21 16:14:17 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '\0')
		return (1);
	while (str[++i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char test[] = "hola";
	char test2[] = "h0la";

	test[0] = 127;

	printf("%d\n", ft_str_is_printable(test));
	printf("%d\n", ft_str_is_printable(test2));
	return (0);
}
*/
