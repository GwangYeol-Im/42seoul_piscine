/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combs2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 09:12:34 by gim               #+#    #+#             */
/*   Updated: 2020/07/06 15:20:42 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print(int num)
{
	int		letter;

	letter = num / 10 + 48;
	write(1, &letter, 1);
	letter = num % 10 + 48;
	write(1, &letter, 1);
}

void		ft_print_comb2(void)
{
	char	chars[2];
	int		nums[2];

	nums[0] = 0;
	chars[0] = ',';
	chars[1] = ' ';
	while (nums[0] <= 98)
	{
		nums[1] = nums[0] + 1;
		while (nums[1] <= 99)
		{
			print(nums[0]);
			write(1, &chars[1], 1);
			print(nums[1]);
			if (nums[0] != 98 || nums[1] != 99)
			{
				write(1, &chars[0], 1);
				write(1, &chars[1], 1);
			}
			nums[1]++;
		}
		nums[0]++;
	}
}
