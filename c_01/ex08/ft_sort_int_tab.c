/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:20:22 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/19 20:57:54 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/*
int main()
{
	int tab[] = {7, 4, 3, 6, 4};
	int tab_size = sizeof(tab) / sizeof(tab[0]);
	for (int i = 0; i < tab_size; i++)
	{
		printf("%d, ", tab[i]);
	}

	printf("\n");

	ft_sort_int_tab(tab, tab_size);
	for (int i = 0; i < tab_size; i++)
	{
		printf("%d, ", tab[i]);
	}
	return 0;
}
*/