/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 04:53:00 by gim               #+#    #+#             */
/*   Updated: 2020/07/23 06:30:30 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_strs(int size, char **strs)
{
	t_list	*prev;
	t_list	*curr;
	int		idx;

	idx = 0;
	if (!(curr = ft_create_elem(strs[idx])))
		return (0);
	while (idx < size - 1)
	{
		prev = ft_create_elem(strs[++idx]);
		prev->next = curr;
		curr = prev;
	}
	return (curr);
}
