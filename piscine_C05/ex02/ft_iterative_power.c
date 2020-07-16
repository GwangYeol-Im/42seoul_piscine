/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:42:21 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/13 16:13:11 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (result);
	else
	{
		while (power)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
