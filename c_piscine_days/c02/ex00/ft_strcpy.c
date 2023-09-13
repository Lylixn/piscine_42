/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 03:11:46 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/22 02:21:12 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "hola";
	char	dest[] = "    ";
	char	dest2[] = "    ";

	ft_strcpy(dest, src);
	strcpy(dest2, src);
	printf("%s\n", dest);
	printf("%s\n", dest2);
	return (0);
}
*/
