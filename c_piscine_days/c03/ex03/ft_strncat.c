/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:49:46 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 19:52:50 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i])
		i++;
	while (src[i2] && i2 < nb)
	{
		dest[i] = src[i2];
		i2++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[50] = "Hello ";
	char src[50] = "World!";
	char dest2[50] = "Hello ";
	char src2[50] = "World!";
	printf("%s\n", ft_strncat(dest, src, 3));
	printf("%s\n", strncat(dest2, src2, 3));
}
*/
