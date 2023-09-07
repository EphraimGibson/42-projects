/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egibson <egibson@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:35:45 by egibson           #+#    #+#             */
/*   Updated: 2023/08/30 18:25:32 by egibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*tempstr;
	char	*tempfind;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		tempstr = str;
		tempfind = to_find;
		while (*tempstr == *tempfind && *tempfind != '\0')
		{
			tempstr++;
			tempfind++;
			if (*tempfind == '\0')
				return (str);
		}
		str++;
	}
	return (NULL);
}
/*
int main()
{
	char haystack[] = "Hello, world! it's a test.";
	char needle[] = "wor";
	char *result = ft_strstr(haystack, needle);
	printf ("Needle: %s\n",result);

	printf ("standard funct: %s\n",strstr(haystack,needle));

	return 0;
}
*/
