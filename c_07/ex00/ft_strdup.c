/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:33:11 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/29 11:54:19 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*result;

	i = 0;
	length = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * length);
	if (result == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* int main()
{
	char *src = "Abcdefghijkl";
	char *result = ft_strdup(src);
	printf("%s\n", result);
	free(result);
} */
