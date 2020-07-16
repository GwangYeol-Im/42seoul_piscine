/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:00:13 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/14 09:39:03 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_rev_params(char *argv[])
{
	char	*params;
	int		len;
	int		i;

	len = 0;
	while (argv[len])
		len++;
	while (len > 1)
	{
		params = argv[--len];
		i = 0;
		while (params[i])
			write(1, &params[i++], 1);
		write(1, "\n", 1);
	}
}

int			main(int argc, char *argv[])
{
	if (argc > 1)
		ft_rev_params(argv);
	return (0);
}
