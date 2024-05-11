/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:36:36 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/22 18:54:15 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main()
{
	char dest[10];
	char str[] = "t";
	unsigned int max_chars = 3;
	char *result = ft_strncpy(dest, str, max_chars);
	printf("%s\n", dest);
	printf("%s\n", result);
	char *result1 = strncpy(dest, str, max_chars);
	printf("%s\n", dest);
	printf("%s\n", result1);
	return 0;
}
*/