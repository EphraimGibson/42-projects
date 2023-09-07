/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:00:37 by egibson           #+#    #+#             */
/*   Updated: 2023/08/30 11:24:35 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/* int main()
{
	char s1[] = "";
	char s2[] = "";

	printf("myfunction: %d\n",ft_strncmp(s1,s2,4));
	printf("original: %d",strncmp(s1,s2,4));
	return 0;
}
*/
