/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:38:34 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/18 17:40:02 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int x)
{
	int	a;
	int	b;

	if (x < 10)
	{
		ft_putchar('0');
		ft_putchar(x + '0');
	}
	else
	{
		a = x / 10;
		b = x % 10;
		ft_putchar(a + '0');
		ft_putchar(b + '0');
	}
}

int	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers(a);
			ft_putchar(' ');
			ft_print_numbers(b);
			if (a < 98)
			{
				ft_putchar(' ');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

/*
int main(void) {
	ft_print_comb2();
}
*/