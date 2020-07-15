/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 19:56:08 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/07 10:15:47 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	last;
	int temp;

	i = 0;
	last = size - 1;
	while (i < size / 2)
	{
		temp = tab[last];
		tab[last] = tab[i];
		tab[i] = temp;
		last--;
		i++;
	}
}
