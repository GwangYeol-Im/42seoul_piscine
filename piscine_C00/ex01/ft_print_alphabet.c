/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 02:16:43 by gim               #+#    #+#             */
/*   Updated: 2020/07/05 02:50:59 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_alphabet(void)
{
	char	letter;
	int		i;

	letter = 'a';
	i = 1;
	while (i <= 26)
	{
		write(1, &letter, 1);
		letter += 1;
		i++;
	}
}
