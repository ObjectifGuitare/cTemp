/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:05:17 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/21 11:05:20 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	int	i;

	if (ac < 2)
		return (0);
	i = 0;
	while (i++ < ac - 1)
		ft_putstr(av[i]);
	return (0);
}
