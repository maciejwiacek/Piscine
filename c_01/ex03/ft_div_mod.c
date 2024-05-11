/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 21:31:54 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/19 18:49:07 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
	int a = 0;
	int b = 0;
	int *ptr = &a;
	int *ptr_1 = &b;
	ft_div_mod(4, 3, ptr, ptr_1);
	printf("%d, %d", a, b);
	return 0;
}
*/