/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 21:48:21 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/22 18:42:32 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
	char dest[10];
	char src[] = "test";
	char *result = ft_strcpy(dest, src);
	printf("%s\n", dest);
	printf("%s\n", result);
	char *result1 = strcpy(dest, src);
	printf("%s\n", dest);
	printf("%s\n", result1);
	return 0;
}
*/