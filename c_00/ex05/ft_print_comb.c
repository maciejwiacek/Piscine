/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:31:46 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/18 17:43:22 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

int	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				if (a != b && a != c && b != c)
				{
					ft_print_numbers(a, b, c);
				}
				c++;
			}
			c = b + 1;
			b++;
		}
		b = a + 1;
		a++;
	}
}

/*
int main() {
	ft_print_comb();
}
*/