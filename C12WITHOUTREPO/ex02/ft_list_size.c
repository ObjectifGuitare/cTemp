/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 06:46:06 by sepatez           #+#    #+#             */
/*   Updated: 2023/03/01 06:46:08 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	if (!begin_list)
		return (0);
	i = 1;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
