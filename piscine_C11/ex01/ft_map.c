/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:23:03 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/20 17:38:58 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int	*result;
	int	i;

	i = 0;
	if (!(result = (int *)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
		result[i++] = f(*tab++);
	return (result);
}