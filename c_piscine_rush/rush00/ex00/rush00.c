/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:58:00 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/12 18:30:42 by nahamida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char a, char b, char c)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar(a);
		}
		else if (i == x - 1)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(b);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (!x || !y)
		return ((void) 0);
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			print_line(x, 'o', '-', 'o');
		}
		else if (i == y - 1)
		{
			print_line(x, 'o', '-', 'o');
		}
		else
		{
			print_line(x, '|', 32, '|');
		}
		i++;
	}
}
