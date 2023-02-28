/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:08:22 by sepatez           #+#    #+#             */
/*   Updated: 2023/02/27 17:08:24 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

typedef struct s_calc
{
	int		a;
	char	op;
	int		b;
	int		result;
}	t_calc;

void	ft_putstr(char *str);
int		ft_plus(int a, int b);
int		ft_minus(int a, int b);
int		ft_divide(int a, int b);
int		ft_modulo(int a, int b);
int		ft_atoi(char *str);
int		ft_is_numeric(char c);
int		ft_turn_to_negative(int result, int minuses);
int		ft_is_space(char c);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
char	check_op(char *str);
void	ft_format(int a, int b, char op);

#endif