/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:48:39 by gim               #+#    #+#             */
/*   Updated: 2020/07/16 21:55:33 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int	div;
	int	half;

	div = 3;
	half = nb / 2;
	while (div <= half)
	{
		if (nb % div == 0)
			return (1);
		div += 2;
	}
	return (0);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (is_prime(nb))
	{
		if (nb % 2 == 1)
			nb += 2;
		nb++;
	}
	return (nb);
}
