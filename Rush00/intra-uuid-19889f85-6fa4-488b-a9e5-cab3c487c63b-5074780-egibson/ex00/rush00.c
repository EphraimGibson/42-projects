/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:20:06 by egibson           #+#    #+#             */
/*   Updated: 2023/08/21 21:14:31 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c);

void	ft_drawer(int x, int y, int i, int j)
{
	while (i <= y)
	{
		while (j <= x)
		{
			if ((j == 1 && i == 1) || (j == x && i == 1)|| (i == y && j == 1) || (j == x && i == y))
				ft_putchar('o');
			else if ((j == 1 && i != y) || (j == x && i != x))
				ft_putchar('|');
			else if ((j > 1 && j != x && i == 1) || (j > 1 && j != x && i == 1)
				|| (j > 1 && j != x && i == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 1;

	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		write(1, "Values must be greater than 0", 30);
	else
	{
		ft_drawer(x, y, 1, 1);
	}
}
