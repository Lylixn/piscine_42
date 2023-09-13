/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:50:51 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 19:53:41 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				j;
	unsigned int	len;

	i = 0;
	j = 0;
	len = 0;
	while (dest[i] != '\0')
		i++;
	while (src[len] != '\0')
		len++;
	if (size <= (unsigned int)i)
		len += size;
	else
		len += i;
	while (src[j] != '\0' && i + 1 < (int)size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
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
	printf("%u\n", ft_strlcat(dest, src, 3));
	printf("%lu\n", strlcat(dest2, src2, 3));
}
*/
