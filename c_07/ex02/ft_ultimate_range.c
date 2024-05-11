/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:03:35 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/29 12:26:27 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

/* int main()
{
	int *range = NULL;
	int min = -10, max = 10, size = ft_ultimate_range(&range, min, max), i;
	printf("Range from %d to %d\n", min, max);
	if (size >= 0) {
		printf("Size of the range: %d\n", size);
		printf("Range values: ");
		for (i = 0; i < size; i++) {
			printf("%d ", range[i]);
		}
		printf("\n");
		free(range);
	} else {
		printf("Memory allocation failed.\n");
	}
} */
