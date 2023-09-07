/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:33:07 by egibson           #+#    #+#             */
/*   Updated: 2023/08/24 11:43:58 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	inner_check;
	int	outer_check;

	outer_check = 0;
	while (outer_check < size - 1)
	{
		inner_check = 0;
		while (inner_check < size -1)
		{
			if (tab[inner_check] > tab[inner_check + 1])
			{
				temp = tab[inner_check];
				tab[inner_check] = tab[inner_check + 1];
				tab[inner_check + 1] = temp;
			}
			inner_check++;
		}
		outer_check++;
	}
}
