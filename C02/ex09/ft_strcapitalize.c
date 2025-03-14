/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:43:56 by egibson           #+#    #+#             */
/*   Updated: 2023/09/01 11:33:12 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capit;

	i = 0;
	capit = 1;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (capit)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				capit = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		else
			capit = 1;
		i++;
	}
	return (str);
}
 int main (int ac, char *av)
 {
	int i = 1;
	while (i < ac)
	{
		ft_strcapitalize(av[i]);
 	}
	return 0;
 }
