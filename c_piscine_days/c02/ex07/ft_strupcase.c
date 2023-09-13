/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 00:39:31 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/23 02:31:16 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "Hello World";
	ft_strupcase(str);
	printf("%s", str);
	return (0);
}
*/
