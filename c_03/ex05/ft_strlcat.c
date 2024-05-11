/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:06:07 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/21 18:42:10 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_size;
	unsigned int	s_size;
	unsigned int	offset;
	unsigned int	i;

	d_size = ft_strlen(dest);
	s_size = ft_strlen(src);
	offset = d_size;
	i = 0;
	while (src[i] != '\0')
	{
		dest[offset] = src[i];
		offset++;
		i++;
		if (i == size - 1)
			break ;
	}
	dest[offset] = '\0';
	return (d_size + s_size);
}

/*
int main()
{
	char dest[50] = "Hello, ";
	char src[] = "World!";
	unsigned int sizetest = 4;
	printf("%s\n", src);
	unsigned int result = ft_strlcat(dest, src, sizetest);
	printf("%s\n", dest);
	printf("%d\n", result);
}
*/