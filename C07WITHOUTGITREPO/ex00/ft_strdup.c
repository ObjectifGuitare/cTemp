/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:34:00 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/21 13:34:02 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = ft_strlen(src);
	result = malloc(i + 1);
	if (!result)
		return (0x0);
	result[i] = '\0';
	while (--i >= 0)
		result[i] = src[i];
	return (result);
}
