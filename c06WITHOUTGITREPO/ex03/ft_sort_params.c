/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:15:11 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/21 11:15:13 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	is_error(int ac, char **av)
{
	if (ac < 2)
		return (1);
	if (ac == 2)
	{
		ft_putstr(av[1]);
		return (1);
	}
	return (0);
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;
	char	*temp;

	if (is_error(ac, av))
		return (0);
	i = 0;
	while (++i < ac)
	{
		j = i;
		while (++j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp;
				j = i;
			}
		}
	}
	i = 0;
	while (i++ < ac - 1)
		ft_putstr(av[i]);
	return (0);
}
