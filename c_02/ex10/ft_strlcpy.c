/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:12:51 by mwiacek           #+#    #+#             */
/*   Updated: 2024/05/11 21:14:51 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (src[i] != '\0' && size > 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

//int main()
//{
//	char destination[40];
//	char *source = "This is a long string";
//
//	unsigned int result = ft_strlcpy(destination, source, 40);
//
//	printf("Copied string: %s\n", destination);
//	printf("Length of source string: %u\n", result);
//
//	return 0;
//}