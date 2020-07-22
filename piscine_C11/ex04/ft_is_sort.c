/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:57:25 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/22 16:53:04 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		ascend;
	int		descend;

	if (length < 2)
		return (1);
	i = 0;
	ascend = 1;
	descend = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			ascend++;
		else if (f(tab[i], tab[i + 1]) > 0)
			descend++;
		else
		{
			ascend++;
			descend++;
		}
		i++;
	}
	if (ascend == length || descend == length)
		return (1);
	return (0);
}
