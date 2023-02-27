/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:33:09 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/27 16:33:11 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) == 1)
		{
			if (check < 0)
				return (0);
			check = 1;
		}
		else if (f(tab[i], tab[i + 1]) == -1)
		{
			if (check > 0)
				return (0);
			check = -1;
		}
		i++;
	}
	return (1);
}

// int	ft_strcmp(int a, int b)
// {
// 	if (a < b)
// 		return (-1);
// 	else if (a == b)
// 		return (0);
// 	return (1);
// }

// #include <stdio.h>
// int main()
// {
// 	int tab[100] = {65, 4, 3, 3, 2, 1, 1};
// 	int length = 8;
// 	printf("%d\n", ft_is_sort(tab, length, ft_strcmp));
// }