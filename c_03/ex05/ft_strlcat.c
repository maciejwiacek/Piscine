/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:06:07 by mwiacek           #+#    #+#             */
/*   Updated: 2024/05/11 21:16:53 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	total_len;
	unsigned int	i;
	unsigned int	j;

	dst_len = 0;
	if (!dst && !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	total_len = dst_len + ft_strlen(src);
	if (size <= dst_len)
		return (total_len);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (total_len);
}

//int main()
//{
//	char dest[50] = "Hello, ";
//	char src[] = "World!";
//	unsigned int sizetest = 10;
//	printf("%s\n", src);
//	unsigned int result = ft_strlcat(dest, src, sizetest);
//	printf("%s\n", dest);
//	printf("%d\n", result);
//}