/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 11:04:55 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/15 12:28:28 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print_base(int num, char *base, int base_num)
{
	char	result[100];
	int		idx;
	int		minus;

	idx = 0;
	minus = 1;
	if (num < 0)
	{
		write(1, "-", 1);
		minus *= -1;
	}
	while (1)
	{
		result[idx++] = base[(num % base_num) * minus];
		num /= base_num;
		if (num == 0)
			break ;
	}
	while (idx)
	{
		write(1, &result[--idx], 1);
	}
}

int			check_base(char *base)
{
	int		idx;
	int		overlap;

	idx = 0;
	while (base[idx])
	{
		if (base[idx] == '+' || base[idx] == '-')
			return (0);
		else
		{
			overlap = 0;
			while (overlap < idx)
			{
				if (base[overlap++] == base[idx])
					return (0);
			}
		}
		idx++;
	}
	return (idx);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		base_num;

	base_num = check_base(base);
	if (!(base_num == 0 || base_num == 1))
		print_base(nbr, base, base_num);
}
