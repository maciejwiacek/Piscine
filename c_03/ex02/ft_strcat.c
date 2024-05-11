/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:11:56 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/21 14:59:05 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr_result;

	ptr_result = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr_result);
}

/*
int main()
{
	char dest[20] = "Hello, ";
	char *src = "world!";

	ft_strcat(dest, src);

	printf("Concatenated string: %s\n", dest);

	return 0;
}
*/