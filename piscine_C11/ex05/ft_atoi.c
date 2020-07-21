/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:25:40 by gim               #+#    #+#             */
/*   Updated: 2020/07/21 13:58:56 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long		change_to_int(char *str, int len)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	while (i < len)
		result = result * 10 + (str[i++] - '0');
	return (result);
}

int				is_space(char c)
{
	if (c == '\t' || c == '\n'
			|| c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int				is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

long long		ft_atoi(char *str)
{
	int	minus;
	int	i;

	i = 0;
	minus = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			minus *= -1;
	}
	if (!is_num(*str))
		return (0);
	while (is_num(str[i]))
		i++;
	return (change_to_int(str, i) * minus);
}
