/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:39:55 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/21 20:27:12 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
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
