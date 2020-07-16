/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:00:13 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/14 09:39:01 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char *argv[])
{
	char	*params;
	int		i;
	int		j;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			params = argv[i++];
			j = 0;
			while (params[j])
				write(1, &params[j++], 1);
			write(1, "\n", 1);
		}
	}
	return (0);
}
