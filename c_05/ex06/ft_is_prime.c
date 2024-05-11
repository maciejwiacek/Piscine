/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:48:29 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/26 18:51:19 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main()
{
	int a = 3;
	int result = ft_is_prime(a);
	if (result == 0)
		printf("Number %d is not a prime number.", a);
	else
		printf("Number %d is a prime number.", a);
} */