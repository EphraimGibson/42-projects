/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:50:23 by egibson           #+#    #+#             */
/*   Updated: 2023/09/05 11:39:30 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_errorcheck(char *base, int *errorflag)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*errorflag = 1;
	while (base[i] != '\0' && *errorflag == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*errorflag = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
			|| base[i] == '/' || base[i] == '*' || base[i] == '='
			|| base[i] == ',' || base[i] == '.'
			|| base[i] < 33 || base[i] > 126)
			*errorflag = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		length;
	int		errorflag;
	long	num;

	length = 0;
	errorflag = 0;
	ft_errorcheck(base, &errorflag);
	num = nbr;
	if (errorflag == 0)
	{
		if (num < 0)
		{
			ft_putchar('-');
			num *= -1;
		}
		while (base[length] != '\0')
			length++;
		if (num < length)
			ft_putchar(base[num]);
		if (num >= length)
		{
			ft_putnum_base(num / length, base);
			ft_putnum_base(num % length, base);
		}
	}
}
