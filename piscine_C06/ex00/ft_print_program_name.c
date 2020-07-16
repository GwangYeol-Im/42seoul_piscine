/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:48:43 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/14 13:28:02 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char *argv[])
{
	char	*program;
	int		i;

	program = argv[0];
	if (argc == 1)
	{
		i = 0;
		while (program[i])
			write(1, &program[i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
