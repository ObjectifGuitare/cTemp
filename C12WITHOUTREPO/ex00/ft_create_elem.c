/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 04:52:57 by sepatez           #+#    #+#             */
/*   Updated: 2023/03/01 04:52:59 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*result;

	result = malloc(sizeof(t_list));
	if (!result)
		return (0x0);
	result->data = data;
	result->next = 0x0;
	return (result);
}
