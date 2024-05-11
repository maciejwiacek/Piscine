/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:54:48 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/21 18:38:52 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main()
{
    char *str1 = "aaa";
    char *str2 = "aaa";

    int result = ft_strcmp(str1, str2);

    if (result < 0) {
        printf("%s comes before %s\n", str1, str2);
    } else if (result > 0) {
        printf("%s comes after %s\n", str1, str2);
    } else {
        printf("%s is equal to %s\n", str1, str2);
    }

    return 0;
}
*/