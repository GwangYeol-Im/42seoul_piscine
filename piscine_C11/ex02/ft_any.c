/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:39:55 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/20 17:44:16 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*))
{
	int	answer;
	int	i;

	answer = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i++]))
			answer = 1;
	}
	return (answer);
}