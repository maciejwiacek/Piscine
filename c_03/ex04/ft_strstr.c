/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:11:50 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/21 18:40:14 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*
int main()
{
	char *str = "this is a testing string for testing";
	char to_find[] = "th is";

	char *result = ft_strstr(str, to_find);
	char *result1 = strstr(str, to_find);

	if(result1 == NULL)
		printf("Substring not found.");
	else
		printf("Substring located -> %s", result1);

	printf("\n");

	if(result == NULL)
		printf("Substring not found.");
	else
		printf("Substring located -> %s", result);
}
*/