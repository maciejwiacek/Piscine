/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:45:29 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/21 18:39:37 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main()
{
    char *str1 = "aaaab";
    char *str2 = "aaaac";
    unsigned int n = 5;

    int result = ft_strncmp(str1, str2, n);

    if (result < 0) {
        printf("\"%s\" come before \"%s\"\n", str1, str2);
    } else if (result > 0) {
        printf("\"%s\" come after \"%s\"\n", str1, str2);
    } else {
        printf("\"%s\" are equal to \"%s\"\n", str1, str2);
    }

    return 0;
}
*/