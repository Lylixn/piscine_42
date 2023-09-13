/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:09:41 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/24 19:52:04 by lguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && n > 0)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[a] - s2[a]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "abgzc";
	char	s2[] = "abcz";
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
}
*/
