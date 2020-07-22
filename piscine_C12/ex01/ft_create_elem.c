/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:28:04 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/22 19:11:42 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	list -> data = data;
	list -> next = 0;
	return (list);
}