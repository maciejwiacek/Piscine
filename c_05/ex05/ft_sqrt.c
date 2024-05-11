/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:46:39 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/26 18:48:12 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	tmp;

	tmp = 1;
	while (tmp * tmp != nb && tmp < nb)
	{
		tmp ++;
	}
	if (tmp * tmp == nb)
	{
		return (tmp);
	}
	else
	{
		return (0);
	}
}

/* int main()
{
	int a = -1715;
	int result = ft_sqrt(a);
	printf("Sqrt of %d is %d.", a, result);
} */