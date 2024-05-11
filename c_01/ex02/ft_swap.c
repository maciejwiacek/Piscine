/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 21:19:25 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/18 21:28:02 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void) {
	int a = 1;
	int b = 0;

	int* ptr_a = &a;
	int* ptr_b = &b;

	ft_swap(ptr_a, ptr_b);

	printf("%d, %d", a, b);

	return 0;
}
*/