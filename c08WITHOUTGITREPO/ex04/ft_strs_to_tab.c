/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 04:01:15 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/23 04:01:17 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_stock_str.h"
// #include <stdlib.h>

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// char	*ft_strdup(char *src)
// {
// 	char	*result;
// 	int		i;

// 	i = ft_strlen(src);
// 	result = malloc(i + 1);
// 	if (!result)
// 		return (0x0);
// 	result[i] = '\0';
// 	while (--i >= 0)
// 		result[i] = src[i];
// 	return (result);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	t_stock_str *result;
// 	int i;

// 	i = -1;
// 	while(++i < ac)
// 	{
// 		result->size = ft_strlen(av[i]);
// 		result->str = av[i];
// 		result->copy = ft_strdup(av[i]);
// 	}
// }

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	for(int i = 0; i < ac; i++)
// 	{
// 		printf("%d\n", ft_strs_to_tab(ac, av)[i].size);
// 		printf("%s\n", ft_strs_to_tab(ac, av)[i].str);
// 		printf("%s\n", ft_strs_to_tab(ac, av)[i].copy);
// 	}
// }