/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:11:58 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/19 20:14:08 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*
int main()
{
	int tab[] = {5, 2, 3};
	int tab_size = sizeof(tab) / sizeof(tab[0]);
	for (int i = 0; i < tab_size; i++)
	{
		printf("%d", tab[i]);
	}

	printf("\n");

	ft_rev_int_tab(tab, tab_size);
	for (int i = 0; i < tab_size; i++)
	{
		printf("%d", tab[i]);
	}
	return 0;
}
*/