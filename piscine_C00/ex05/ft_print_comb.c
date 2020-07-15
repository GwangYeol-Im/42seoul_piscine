/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 03:50:12 by gim               #+#    #+#             */
/*   Updated: 2020/07/06 14:36:42 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print(char numbers[5])
{
	write(1, &numbers[0], 1);
	write(1, &numbers[1], 1);
	write(1, &numbers[2], 1);
	if (numbers[0] != '7' || numbers[1] != '8' || numbers[2] != '9')
	{
		write(1, &numbers[3], 1);
		write(1, &numbers[4], 1);
	}
}

void		ft_print_comb(void)
{
	char	numbers[5];

	numbers[0] = '0';
	numbers[3] = ',';
	numbers[4] = ' ';
	while (numbers[0] <= '7')
	{
		numbers[1] = numbers[0] + 1;
		while (numbers[1] <= '8')
		{
			numbers[2] = numbers[1] + 1;
			while (numbers[2] <= '9')
			{
				print(numbers);
				numbers[2]++;
			}
			numbers[1]++;
		}
		numbers[0]++;
	}
}
