/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:27:02 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/29 13:17:36 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dst, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
}

void	ft_strcat(char *dst, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (str[j] != '\0')
	{
		dst[i] = str[j];
		i++;
		j++;
	}
	dst[i] = '\0';
}

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		length;
	int		i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		if (i < size - 1)
			length += ft_strlen(sep);
		i++;
	}
	str = (char *)malloc(sizeof(char) * length);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		str = '\0';
		return (str);
	}
	str = ft_create_str(size, strs, sep);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i]);
		i++;
	}
	return (str);
}

/* int main(void)
{
	int size = 3;
	char *strs[3] = {"Hello", "World", "!"};
	char *sep = ", ";
	char *result = ft_strjoin(size, strs, sep);
	if (result == NULL)
		printf("Memory allocation failed.\n");
	else {
		printf("%s", result);
		free(result);
	}
} */
