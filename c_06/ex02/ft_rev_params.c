/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiacek <mwiacek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:20:56 by mwiacek           #+#    #+#             */
/*   Updated: 2024/01/25 16:37:17 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		while (argc > 1)
		{
			ft_putstr(argv[argc - 1]);
			argc--;
		}
	}
	return (0);
}
