/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:29:29 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/20 17:08:57 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}

int	ft_isalpha(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_isnum(char str)
{
	if (str >= '0' && str <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;
	int	newword;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[0]))
			newword = 1;
		if (ft_isalpha(str[i]) == 0 && ft_isnum(str[i]) == 0)
			newword = 1;
		if (newword == 1 && ft_isalpha(str[i]))
		{
			str[i] = str[i] - ('a' - 'A');
			newword = 0;
		}
		else if (newword == 1 && ft_isnum(str[i]))
			newword = 0;
		i++;
	}
	return (str);
}

/*
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
}
*/