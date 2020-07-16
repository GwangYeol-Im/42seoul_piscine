/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:37:37 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/13 16:23:23 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_fibonacci(int a, int b, int i, int index)
{
	if (index == 0)
		return (0);
	else if (i == index)
		return (b);
	else
		return (get_fibonacci(b, a + b, i + 1, index));
}

int		ft_fibonacci(int index)
{
	int	i;
	int	a;
	int	b;

	i = 1;
	a = 0;
	b = 1;
	if (index < 0)
		return (-1);
	return (get_fibonacci(a, b, i, index));
}
