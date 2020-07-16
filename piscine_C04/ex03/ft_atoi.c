/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 21:45:57 by gim               #+#    #+#             */
/*   Updated: 2020/07/16 13:05:10 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			change_dec(int num, int dec)
{
	num -= 48;
	while (dec)
	{
		num *= 10;
		dec--;
	}
	return (num);
}

int			change_int(char *str, int idx)
{
	int	num;
	int	dec;

	num = 0;
	dec = 0;
	while (idx)
		num += change_dec((int)str[--idx], dec++);
	return (num);
}

int			judge_ascii(char c, char symbol)
{
	if (symbol == '0')
		return (c >= '0' && c <= '9' ? 1 : 0);
	else if (symbol == 'a')
		return (c >= 'a' && c <= 'z' ? 1 : 0);
	else if (symbol == 'A')
		return (c >= 'A' && c <= 'Z' ? 1 : 0);
	else if (symbol == ' ')
		return (c == '\t'
					|| c == '\n'
					|| c == '\v'
					|| c == '\f'
					|| c == '\r'
					|| c == ' ' ? 1 : 0);
	else
		return (0);
}

int			ft_atoi(char *str)
{
	int		minus;
	int		i;

	minus = 1;
	while (judge_ascii(*str, ' '))
		str++;
	while (*str)
	{
		if (judge_ascii(*str, '0'))
			break ;
		if (judge_ascii(*str, 'a')
				|| judge_ascii(*str, 'A')
				|| judge_ascii(*str, ' '))
			return (0);
		if (*str++ == '-')
			minus *= -1;
	}
	i = 0;
	while (str[i])
	{
		if (!judge_ascii(str[i], '0'))
			break ;
		i++;
	}
	return (change_int(str, i) * minus);
}
