/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:58:44 by gim               #+#    #+#             */
/*   Updated: 2020/07/22 17:13:41 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_func.h"

int			(*get_calc(char *op))(int, int)
{
	if (op[1])
		return (0);
	if (op[0] == '+')
		return (&add);
	else if (op[0] == '-')
		return (&min);
	else if (op[0] == '*')
		return (&mul);
	else if (op[0] == '/')
		return (&div);
	else if (op[0] == '%')
		return (&mod);
	return (0);
}

int			check_zero(char *op, char *n2)
{
	if (*op == '/' && *n2 == '0')
	{
		write(1, "Stop : division by zero\n", 25);
		return (1);
	}
	if (*op == '%' && *n2 == '0')
	{
		write(1, "Stop : modulo by zero\n", 23);
		return (1);
	}
	return (0);
}

int			main(int ac, char **av)
{
	int		(*calc)(int, int);
	int		n1;
	int		n2;

	if (ac != 4)
		return (0);
	if (!(calc = get_calc(av[2])))
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (!check_zero(av[2], av[3]))
	{
		n1 = ft_atoi(av[1]);
		n2 = ft_atoi(av[3]);
		ft_putnbr(calc(n1, n2));
		write(1, "\n", 1);
	}
	return (0);
}
