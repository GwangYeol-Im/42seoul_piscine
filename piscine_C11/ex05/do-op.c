/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:48:00 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/20 19:48:25 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void			recur_print(long long num)
{
	char		c;

	c = num % 10 + '0';
	if (num >= 10)
		recur_print(num / 10);
	write(1, &c, 1);
}

long long		do_op(char *n1, char *op, char *n2)
{
	long long	num1;
	long long	num2;

	num1 = 0;
	num2 = 0;
	while (*n1)
		num1 = num1 * 10 + (*n1++ - '0');
	while (*n2)
		num2 = num2 * 10 + (*n2++ - '0');
	if (*op == '+')
		return (num1 + num2);
	else if (*op == '-')
		return (num1 - num2);
	else if (*op == '*')
		return (num1 * num2);
	else if (*op == '/')
		return (num1 / num2);
	else if (*op == '%')
		return (num1 % num2);
	return (0);
}

void			print_result(char *n1, char *op, char *n2, long long(*f)(char*, char*, char*))
{
	long long	result;

	result  = f(n1, op, n2);
	if (result < 0)
	{
		write(1, "-", 1);
		result *= -1;
	}
	recur_print(result);
}

int				check(char *op, char *n2)
{
	if (*op == '/' && *n2 == '0')
	{
		write(1, "Stop : division by zero", 24);
		return (0);
	}
	if (*op == '%' && *n2 == '0')
	{
		write(1, "Stop : modulo by zero", 22);
		return (0);
	}
	if (!(*op == '+' 
			|| *op == '-' 
			|| *op == '/' 
			|| *op == '*'
			|| *op == '%'))
	{
		write(1, "0", 1);
		return (0);
	}
	return (1);
}

int				main(int ac, char **av)
{
	if (ac == 4)
	{
		if (check(av[2], av[3]))
			print_result(av[1], av[2], av[3], *do_op);
		write(1, "\n", 1);
	}
	return (0);	
}
