/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:15:17 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/20 00:15:19 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (i++ < nb)
		result *= nb * ft_recursive_factorial(nb - 1);
	return (result);
}
