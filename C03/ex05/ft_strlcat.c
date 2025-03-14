/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:41:37 by egibson           #+#    #+#             */
/*   Updated: 2023/08/30 19:07:42 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lnt;
	unsigned int	slnt;

	slnt = 0;
	while (src[slnt] != '\0')
		slnt++;
	lnt = 0;
	while (*dest && size > 0)
	{
		dest++;
		size--;
		lnt++;
	}
	if (size == 0)
		return (lnt + slnt);
	while (*src && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (lnt + slnt);
}
