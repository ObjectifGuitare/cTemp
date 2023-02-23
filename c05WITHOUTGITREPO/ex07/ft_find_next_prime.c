/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:34:59 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/21 10:35:01 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div <= nb / div)
	{
		if (!(nb % div++))
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (!(nb % 2))
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
