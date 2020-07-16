/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 07:04:05 by gim               #+#    #+#             */
/*   Updated: 2020/07/05 07:26:48 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int row, char first, char mid, char last)
{
	int x;

	x = 1;
	while (x <= row)
	{
		if (x == 1)
		{
			ft_putchar(first);
		}
		else if (x == row)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(mid);
		}
		x++;
	}
}

void	rush(int row, int col)
{
	int y;

	y = 1;
	while (y <= col)
	{
		if (y == 1)
		{
			ft_print_line(row, 'A', 'B', 'C');
		}
		else if (y == col)
		{
			ft_print_line(row, 'C', 'B', 'A');
		}
		else
		{
			ft_print_line(row, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		y++;
	}
}
