/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:29:07 by egibson           #+#    #+#             */
/*   Updated: 2023/08/24 13:23:21 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	last_count;

	last_count = size - 1;
	count = 0;
	while (count < size / 2)
	{
		temp = tab[count];
		tab[count] = tab[last_count];
		tab[last_count] = temp;
		count++;
		last_count--;
	}
}
