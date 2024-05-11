/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:10:57 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/31 16:11:18 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_create_str(char *str)
{
	int		i;
	char	*new_str;

	i = 0;
	while (str[i] != '\0')
		i++;
	new_str = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (new_str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_create_str(av[i]);
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}

/* int main(void)
{
	int ac = 3;
	char *av[] = {"Abcd", "Efg", "Hijkl"};
	t_stock_str *result;
	result = ft_strs_to_tab(ac, av);
	if (result != NULL)
	{
		ft_show_tab(result);
		for (int i = 0; i < ac; i++)
		{
			free(result[i].copy);
		}
		free(result);
	}
	return (0);
}
 */
