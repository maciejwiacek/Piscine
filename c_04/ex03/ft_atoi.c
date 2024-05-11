/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:31:48 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/22 20:18:16 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n')
	{
		return (1);
	}
	else if (c == '\r' || c == '\t' || c == '\v')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_chartonum(char *str, int minuses)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (minuses % 2 != 0)
	{
		sign = -1;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
		}
		else
		{
			return (result * sign);
		}
		str++;
	}
	return (result * sign);
}

int	ft_atoi(char *str)
{
	int	minuses;

	minuses = 0;
	while (*str != '\0')
	{
		while (ft_isspace(*str) != 0 && *str != '\0')
		{
			str++;
		}
		while (*str == '+' || *str == '-')
		{
			if (*str == '-')
			{
				minuses++;
			}
			str++;
		}
		return (ft_chartonum(str, minuses));
	}
	return (0);
}

/*
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    int result = ft_atoi(argv[1]);

    printf("Converted integer: %d\n", result);

    return 0;
}
*/