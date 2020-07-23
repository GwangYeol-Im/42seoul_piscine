/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 04:26:13 by gim               #+#    #+#             */
/*   Updated: 2020/07/23 04:43:49 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	**curr;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		curr = begin_list;
		while ((*curr)->next)
			*curr = (*curr)->next;
		(*curr)->next = ft_create_elem(data);
	}
}
