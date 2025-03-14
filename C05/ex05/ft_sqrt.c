/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:14:25 by egibson           #+#    #+#             */
/*   Updated: 2023/09/06 13:27:18 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n <= 46340 && (n * n) < nb)
	{
		n++;
	}
	if ((n * n) == nb)
	{
		return (n);
	}
	return (0);
}

/*
int main()
{
	printf("%d", ft_sqrt(9));
}
*/
