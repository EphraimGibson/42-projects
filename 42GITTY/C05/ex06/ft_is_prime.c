/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:28:54 by egibson           #+#    #+#             */
/*   Updated: 2023/09/07 12:42:34 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb % i != 0)
	{
		i++;
	}
	if (nb == i)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main()
{
    printf("%d", ft_is_prime(7));
    return (0);
}
*/
