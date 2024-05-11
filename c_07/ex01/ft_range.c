/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:55:01 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/29 12:04:27 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	if (max <= min)
		return (NULL);
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (NULL);
	while (i < max - min)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

/* int main(void)
{
	int min = 30;
	int max = 20;
	int *result = ft_range(min, max);
	int i;
	if (result == NULL)
	{
		printf("Memory allocation failed.\n");
		return (0);
	}
	for (i = 0; i < max - min; i++)
	{
		printf("%d, ", result[i]);
	}
	free(result);
	return 0;
} */
