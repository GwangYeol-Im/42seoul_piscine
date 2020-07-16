/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:04:34 by gim               #+#    #+#             */
/*   Updated: 2020/07/14 21:26:53 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	while (min + i < max)
	{
		(*range)[i] = min + i;
	}
	return (max - min);
}
