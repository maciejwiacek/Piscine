/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:10:00 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/31 16:10:08 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].size != 0 || par[i].copy != 0 || par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr("");
		ft_putstr(par[i].copy);
		i++;
	}
}
