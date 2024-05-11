/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:12:51 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/20 19:17:11 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int main()
{
	char destination[10];
	char *source = "This is a long string";

	unsigned int result = ft_strlcpy(destination, source, 10);

	printf("Copied string: %s\n", destination);
	printf("Length of source string: %u\n", result);

	return 0;
}
*/