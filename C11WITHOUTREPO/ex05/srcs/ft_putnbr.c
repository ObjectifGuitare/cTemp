/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:23:42 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/14 12:15:01 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	long_nb;

	long_nb = (long long) nb;
	if (nb < 0)
	{
		long_nb = -long_nb;
		ft_putchar('-');
	}
	if (long_nb > 9)
	{
		ft_putnbr(long_nb / 10);
		long_nb %= 10;
	}
	ft_putchar(long_nb + '0');
}
