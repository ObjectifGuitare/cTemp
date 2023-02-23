/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:57:26 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/21 14:57:28 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_no_size(void)
{
	char	*result;

	result = malloc(1);
	if (!result)
		return (0x0);
	result = "";
	return (result);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_strlen(dest);
	while (*src)
	{
		dest[i++] = *src;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	count;
	int	sep_len;

	i = -1;
	count = 0;
	sep_len = ft_strlen(sep);
	while (++i < size)
	{
		count += ft_strlen(strs[i]);
	}
	i = 0;
	while (i++ < size - 1)
		count += sep_len;
	return (count + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		result_size;

	i = 0;
	result_size = ft_malloc_size(size, strs, sep);
	if (size == 0)
		return (ft_no_size());
	result = malloc(result_size);
	if (!result)
		return (0x0);
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		result += ft_strlen(strs[i]);
		if (i++ < size - 1)
		{
			ft_strcat(result, sep);
			result += ft_strlen(sep);
		}
	}
	return ((result - result_size) + 1);
}

// #include <stdio.h>
// int main()
// {
// 	char sep[100] = " tab tab tab ";
// 	int size = 2;
// 	char **strs;

// 	strs = malloc(200);
// 	for (int i = 0; i < size; i++)
// 	{
// 		strs[i] = malloc(10);
// 		strs[i] = "bonjour";
// 	}	
// 	printf("%i\n", ft_malloc_size(size, strs, sep));
// 	char *b = ft_strjoin(size, strs, sep);
// 	printf("|%s|\n", b);
// 	printf("%d", ft_strlen(b));
// }