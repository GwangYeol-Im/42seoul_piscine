/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 03:05:28 by gim               #+#    #+#             */
/*   Updated: 2020/07/05 03:13:48 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_reverse_alphabet(void)
{
	char	letter;
	int		i;

	letter = 'z';
	i = 1;
	while (i <= 26)
	{
		write(1, &letter, 1);
		letter -= 1;
		i++;
	}
}
