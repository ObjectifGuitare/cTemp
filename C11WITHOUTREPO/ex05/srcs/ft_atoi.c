/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:28:14 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/16 18:28:16 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	ft_is_space(char c)
{
	return (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ');
}

int	ft_turn_to_negative(int result, int minuses)
{
	if (minuses % 2 == 1)
		return (-result);
	return (result);
}

int	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	result;
	int	minuses;
	int	multiplicator;

	minuses = 0;
	multiplicator = 1;
	result = 0;
	if (!ft_is_space(*str) && !ft_is_numeric(*str)
		&& *str != '+' && *str != '-')
		return (result);
	while (ft_is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			minuses++;
	while (*str >= '0' && *str <= '9')
		str++;
	while (str-- && ft_is_numeric(*str))
	{
		result += (*str - '0') * multiplicator;
		multiplicator *= 10;
	}
	result = ft_turn_to_negative(result, minuses);
	return (result);
}
