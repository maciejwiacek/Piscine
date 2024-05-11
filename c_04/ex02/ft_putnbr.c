/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:10:52 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/23 15:37:10 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char str)
{
	write(1, &str, 1);
}

void	ft_putnbr(int nb)
{
	int	int_min;

	int_min = -2147483648;
	if (nb == int_min)
	{
		print('-');
		ft_putnbr(-(nb / 10));
		print(-(nb % 10) + '0');
		return ;
	}
	if (nb < 0)
	{
		print('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		print(nb % 10 + '0');
	}
	else if (nb < 10)
	{
		print(nb + '0');
		return ;
	}
}

/*
int main()
{
	ft_putnbr(0);
}
*/