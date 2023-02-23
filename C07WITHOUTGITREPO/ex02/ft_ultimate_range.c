/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:06:41 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/21 14:06:45 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (0x0);
	result = malloc(sizeof(int) * (max - min));
	if (!result)
		return (0x0);
	i = 0;
	while (min < max)
		result[i++] = min++;
	return (result);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0x0;
		return (0);
	}
	if (range == 0x0)
		return (-1);
	*range = ft_range(min, max);
	if (!range[0])
		return (-1);
	return (max - min);
}
