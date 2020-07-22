/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:57:25 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/22 15:05:31 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		check;

	if (length < 2)
		return (1);
	i = 0;
	check = tab[0] > tab[1] ? 1 : -1;
	while (i < length - 1)
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
