/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:00:13 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/14 09:39:04 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print_params(char *argv[])
{
	char	*params;
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		params = argv[i++];
		j = 0;
		while (params[j])
			write(1, &params[j++], 1);
		write(1, "\n", 1);
	}
}

int			cmp_ascii(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (0);
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	return (0);
}

void		ft_sort_params(int argc, char *argv[])
{
	char	*temp;
	int		len;
	int		i;
	int		cmp;

	len = argc;
	i = 1;
	while (i < len)
	{
		cmp = 1;
		while (cmp < len - i)
		{
			if (cmp_ascii(argv[cmp], argv[cmp + 1]))
			{
				temp = argv[cmp];
				argv[cmp] = argv[cmp + 1];
				argv[cmp + 1] = temp;
			}
			cmp++;
		}
		i++;
	}
	print_params(argv);
}

int			main(int argc, char *argv[])
{
	if (argc > 1)
		ft_sort_params(argc, argv);
	return (0);
}
