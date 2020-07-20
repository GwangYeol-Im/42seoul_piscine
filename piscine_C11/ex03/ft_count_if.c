/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:52:49 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/20 17:54:08 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	answer;
	int	i;

	answer = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i++]))
			answer++;
	}
	return (answer);
}