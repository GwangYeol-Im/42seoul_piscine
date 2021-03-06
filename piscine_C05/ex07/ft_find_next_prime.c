/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:48:39 by gim               #+#    #+#             */
/*   Updated: 2020/07/19 11:52:37 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				is_prime(int nb)
{
	long long	div;

	div = 2;
	while (div * div <= nb)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int				ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!is_prime(nb))
		nb++;
	return (nb);
}
