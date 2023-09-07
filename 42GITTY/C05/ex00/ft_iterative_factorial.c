/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:55:25 by egibson           #+#    #+#             */
/*   Updated: 2023/09/06 20:12:20 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb >= 0)
		num = 1;
	while (nb >= 1)
	{
		num *= nb;
		nb--;
	}
	return (num);
}

/*int main()
{
	printf("%d", ft_iterative_factorial(-21));
	return 0;
}
*/
