/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 04:05:21 by gim               #+#    #+#             */
/*   Updated: 2020/07/23 04:11:19 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int	cnt;

	cnt = 0;
	while (begin_list)
	{
		cnt++;
		begin_list = begin_list->next;
	}
	return (cnt);
}
