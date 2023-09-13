/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra <lylian.gr@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:58:06 by lguerra           #+#    #+#             */
/*   Updated: 2023/08/23 21:16:54 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	while (i++ < len)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello World!";
	s2 = strdup(s1);
	printf("%s\n", s2);
	free(s2);
	return (0);
}*/
