/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 06:34:45 by gim               #+#    #+#             */
/*   Updated: 2020/07/23 07:07:30 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;
	t_list	*curr;

	curr = begin_list;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free_fct(temp->data);
		free(temp);
	}
}
