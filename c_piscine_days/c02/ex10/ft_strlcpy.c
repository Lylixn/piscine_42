/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:00:29 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/23 00:32:06 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (n != 0)
	{
		while (src[i] != '\0' && i < (n - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (n != 0)
		dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "hola";
	char dest[] = "adios";
	unsigned int n = 3;

	printf("%d\n", ft_strlcpy(dest, src, n));
	printf("%d\n", strlcpy(dest, src, n));
	printf("%s\n", dest);
}*/
