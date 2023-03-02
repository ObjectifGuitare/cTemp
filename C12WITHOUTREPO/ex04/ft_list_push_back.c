/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:04:57 by sepatez           #+#    #+#             */
/*   Updated: 2023/03/02 09:04:58 by sepatez          ###   ########.fr       */
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

void    ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*cursor;
	
	cursor = (*begin_list)->next;
	while(cursor->next)
	{
		cursor = cursor->next;
	}
	cursor->next = ft_create_elem(data);
}
