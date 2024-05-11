/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:50:31 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/19 19:00:15 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}

/*
int main()
{
	int a = 5;
	int b = 2;

	int *ptr = &a;
	int *ptr_1 = &b;

	ft_ultimate_div_mod(ptr, ptr_1);

	printf("%d, %d", a, b);

	return 0;
}
*/