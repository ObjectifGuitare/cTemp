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

int check_errors()
{

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

int main(int ac, char **av)
{
	char    op;

	if (ac != 4)
		return 0;
	if (check_errors)
		return ;
	op = check_op(av[2]);
	if(op == 'L')
	{
		write(1, "0\n", 2);
		return (0);
	}
}
