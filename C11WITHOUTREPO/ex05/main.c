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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    check_op(char *str)
{
	if (ft_strlen(str) != 1)
		return 'L';
	if (*str == '+')
		return (*str);
	if (*str == '-')
		return (*str);
	if (*str == '/')
		return (*str);
	if (*str == '%')
		return (*str);
	return 'L';
}

void ft_format(int a, int b, char op)
{
	if (op == '+')
		ft_putnbr(a + b);
	else if (op == '-')
		ft_putnbr(a - b);
	else if (op == '/' && b != 0)
		ft_putnbr(a / b);
	else if (op == '%' && b != 0)
		ft_putnbr(a % b);
	else if (op == '/' && b == 0)
		ft_putstr("Stop : division by zero");
	else if (op == '%' && b == 0)
		ft_putstr("Stop : modulo by zero");
}


int main(int ac, char **av)
{
	t_calc	calc;

	if (ac != 4)
		return 0;
	calc.op = check_op(av[2]);
	if (calc.op == 'L')
	{
		write(1, "0\n", 2);
		return (0);
	}
	calc.a = ft_atoi(av[1]);
	calc.b = ft_atoi(av[3]);
	ft_format(calc.a, calc.b, calc.op);
	write(1, "\n", 1);
	return 0;
}
