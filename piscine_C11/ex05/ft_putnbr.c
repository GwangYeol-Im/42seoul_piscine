/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 12:55:56 by gim               #+#    #+#             */
/*   Updated: 2020/07/22 21:24:09 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr(int nb)
{
	int		minus;
	int		div;
	int		mod;
	char	c;

	minus = nb < 0 ? -1 : 1;
	div = nb / 10 * minus;
	mod = nb % 10 * minus;
	c = mod + '0';
	if (nb < 0)
		write(1, "-", 1);
	if (div)
		ft_putnbr(div);
	write(1, &c, 1);
}
