/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:25:40 by gim               #+#    #+#             */
/*   Updated: 2020/07/22 17:12:30 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				change_to_int(char *str, int len)
{
	int			i;
	int			result;

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

int				ft_atoi(char *str)
{
	int			minus;
	int			i;

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
