/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 19:00:11 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/19 19:31:58 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print(char *str, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = *(str + i) + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int			is_safe(char *places, int cur_row, int cur_col)
{
	int		i;

	i = 0;
	while (i < cur_row)
	{
		if (*(places + i) == cur_col)
			return (-1);
		if (*(places + i) > cur_col)
		{
			if ((cur_row - i) - (*(places + i) - cur_col) == 0)
				return (-1);
		}
		else
		{
			if ((cur_row - i) - (cur_col - *(places + i)) == 0)
				return (-1);
		}
		i++;
	}
	return (0);
}

void		recursive_search(char *places, int cur_row, intptr_t *available)
{
	int		cur_col;

	cur_col = 0;
	if (cur_row == 10)
	{
		print(places, 10);
		(*available)++;
		return ;
	}
	while (cur_col < 10)
	{
		if (is_safe(places, cur_row, cur_col) == 0)
		{
			*(places + cur_row) = cur_col;
			recursive_search(places, cur_row + 1, available);
		}
		cur_col++;
	}
	return ;
}

int			ft_ten_queens_puzzle(void)
{
	int		i;
	long	available;
	char	places[10];

	available = 0;
	i = 0;
	while (i < 10)
	{
		*(places + i) = '.';
		i++;
	}
	recursive_search(places, 0, &available);
	return (available);
}

