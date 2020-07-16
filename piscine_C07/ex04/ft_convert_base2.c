/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:02:35 by gim               #+#    #+#             */
/*   Updated: 2020/07/16 16:54:42 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			judge_ascii(char c, char *base)
{
	if (c == '\t' || c == '\n'
			|| c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (-1);
	if (c == '-')
		return (0);
	if (c == '+')
		return (1);
	while (*base)
	{
		if (c == *base++)
			return (2);
	}
	if (c >= 'a' && c <= 'z')
		return (-2);
	if (c >= 'A' && c <= 'Z')
		return (-2);
	return (0);
}

int			in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (base[i] - 48);
		i++;
	}
	return (0);
}

int			check_base(char *base)
{
	int	idx;
	int overlap;

	idx = 0;
	while (base[idx])
	{
		if (base[idx] == '+' || base[idx] == '-' || base[idx] == ' ')
			return (0);
		else
		{
			overlap = 0;
			while (overlap < idx)
			{
				if (base[overlap++] == base[idx])
					return (0);
			}
		}
		idx++;
	}
	if (idx == 1)
		return (0);
	return (idx);
}

void		compact(char *result, int interval)
{
	int		idx;

	idx = 0;
	if (result[0] == '-')
	{
		idx = 1;
		interval--;
	}
	while (idx + interval < 34)
	{
		result[idx] = result[idx + interval];
		idx++;
	}
	while (idx < 34)
		result[idx++] = '\0';
}
