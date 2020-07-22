/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:32:54 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/22 18:41:56 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;
	int		len;

	list = ft_create_elem(data);
	len = 0;
	while (begin_list[len])
		len++;
	len += 1;
	begin_list[len] = 0;
	while (--len > 0)
		begin_list[len] = begin_list[len - 1];
	begin_list[len] = list;
}
