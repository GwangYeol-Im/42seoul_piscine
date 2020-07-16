/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:14:38 by gim               #+#    #+#             */
/*   Updated: 2020/07/16 13:58:16 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int i;
	int j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
				|| base[i] == '\n' || base[i] == '\v'
				|| base[i] == '\t' || base[i] == '\f'
				|| base[i] == '\r' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	judge_ascii(char c, char *base)
{
	int i;

	if (c == '\t' || c == '\n'
			|| c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	if (c == '-')
		return (-1);
	if (c == '+')
		return (-2);
	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i++])
			return (2);
	}
	return (0);
}

int	get_int(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int	get_len(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int index;
	int count;
	int result;
	int length;

	if (!check_base(base))
		return (0);
	index = 0;
	while (judge_ascii(str[index], base) == 1)
		index++;
	count = 0;
	while (judge_ascii(str[index], base) < 0)
	{
		if (judge_ascii(str[index], base) == -1)
			count++;
		index++;
	}
	if (judge_ascii(str[index], base) != 2)
		return (0);
	result = get_int(str[index++], base);
	length = get_len(base);
	while (judge_ascii(str[index], base) == 2)
		result = result * length + get_int(str[index++], base);
	return (count % 2 == 1 ? result * (-1) : result);
}
