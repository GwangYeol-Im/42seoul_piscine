/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:57:25 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/21 20:59:19 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		check;

	i = 0;
	check = tab[0] > tab[1] ? 1 : -1;
	while (i < length)
	{
		if (check > 0)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
		}
		else
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
		}
		i++;
	}
	return (1);
}
