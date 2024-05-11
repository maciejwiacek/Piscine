/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:15:18 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/25 15:25:58 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * temp;
		power--;
	}
	return (nb);
}

/*
int main()
{
	int result = ft_iterative_power(1000, -1);
	printf("%d", result);
}
*/