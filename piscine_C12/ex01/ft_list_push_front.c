/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:32:54 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/23 03:55:50 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	if (!(elem = ft_create_elem(data)))
		return ;
	if (begin_list != 0)
		elem->next = *begin_list;
	*begin_list = elem;
}
