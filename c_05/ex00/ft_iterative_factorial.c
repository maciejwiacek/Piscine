/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:55:02 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/25 19:53:52 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	tmp = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (tmp > 1)
	{
		nb = nb * tmp;
		tmp--;
	}
	return (nb);
}

/* int main()
{
	int result = ft_iterative_factorial(12);
	printf("%d", result);
} */