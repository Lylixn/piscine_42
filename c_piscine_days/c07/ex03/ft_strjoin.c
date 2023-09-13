/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:19:51 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/29 16:40:41 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (dest[++i])
		;
	while (src[++j])
		dest[i + j] = src[j];
	dest[i + j] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		msize;
	int		len;
	int		i;

	len = 0;
	i = -1;
	while (++i < size)
		len += ft_strlen(strs[i]);
	msize = len + ft_strlen(sep) * size + 1;
	str = malloc(sizeof(char) * msize);
	if (!str)
		return (NULL);
	i = 0;
	while (i < msize)
		str[i++] = '\0';
	i = -1;
	while (++i < size)
	{
		str = ft_strcat(str, strs[i]);
		str = ft_strcat(str, sep);
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char *strs[] = {"tet", "t"};
	char *sep = " ";
	char *str;

	str = ft_strjoin(2, strs, sep);
	printf("%s", str);
	free(str);
	return (0);
}
