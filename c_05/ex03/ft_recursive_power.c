/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:20:33 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/25 15:25:55 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	temp;

	temp = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		temp = ft_recursive_power(nb, power - 1);
	}
	return (nb * temp);
}

/*
int main()
{
	int result = ft_recursive_power(0, 10);
	printf("%d", result);
}
*/