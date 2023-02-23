/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:54:18 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/21 13:54:19 by sepatez          ###   ########.fr       */
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
