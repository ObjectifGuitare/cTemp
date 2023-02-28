/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:12:05 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/27 17:12:07 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_op(char *str)
{
	if (ft_strlen(str) != 1)
		return (-1);
	if (*str == '+')
		return (0);
	if (*str == '-')
		return (1);
	if (*str == '/')
		return (2);
	if (*str == '%')
		return (3);
	return ('L');
}

int	ft_format(int b, int op)
{
	if (op == 2 && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (op == 3 && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_calc	calc;
	int		(*doop[4])(int a, int b);

	if (ac != 4)
		return (0);
	calc.op = check_op(av[2]);
	if (calc.op == 'L')
	{
		write(1, "0\n", 2);
		return (0);
	}
	doop[0] = &ft_plus;
	doop[1] = &ft_minus;
	doop[2] = &ft_divide;
	doop[3] = &ft_modulo;
	calc.a = ft_atoi(av[1]);
	calc.b = ft_atoi(av[3]);
	if (!ft_format(calc.b, calc.op))
		return (0);
	ft_putnbr(doop[calc.op](calc.a, calc.b));
	write(1, "\n", 1);
	return (0);
}
