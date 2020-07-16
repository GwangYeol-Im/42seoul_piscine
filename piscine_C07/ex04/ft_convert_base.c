/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:29:59 by gim               #+#    #+#             */
/*   Updated: 2020/07/16 16:53:59 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			judge_ascii(char c, char *base);
int			in_base(char c, char *base);
int			check_base(char *base);
void		compact(char *result, int interval);

char		*convert_to_base(int num, char *base, int base_num)
{
	char	*result;
	int		idx;

	result = (char *)malloc(sizeof(char) * 34);
	idx = 0;
	while (idx < 34)
		result[idx++] = 0;
	if (num < 0)
	{
		result[0] = '-';
		num *= -1;
	}
	idx = 33;
	while (num / base_num)
	{
		result[idx--] = base[num % base_num];
		num /= base_num;
	}
	result[idx] = base[num % base_num];
	compact(result, idx);
	return (result);
}

int			convert_to_dec(char *str, int len, char *base, int base_num)
{
	int		result;
	int		i;

	result = 0;
	i = 0;
	while (i < len)
	{
		result = result * base_num + in_base(str[i], base);
		i++;
	}
	return (result);
}

int			ft_atoi(char *str, char *base, int base_num)
{
	int		minus;
	int		num;
	int		idx;
	int		c;

	minus = 1;
	c = 0;
	while (judge_ascii(*str, base) == -1)
		str++;
	while (judge_ascii(*str, base) != 2)
	{
		c = judge_ascii(*str, base);
		if (c == -1 || c == -2)
			return (0);
		if (c == 0)
			minus *= -1;
		str++;
	}
	num = 0;
	idx = 0;
	while (judge_ascii(str[idx], base) == 2)
		idx++;
	num = convert_to_dec(str, idx, base, base_num);
	return (num * minus);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		from_num;
	int		to_num;
	int		atoi_num;

	from_num = check_base(base_from);
	to_num = check_base(base_to);
	if (!from_num || !to_num)
		return (0);
	atoi_num = ft_atoi(nbr, base_from, from_num);
	return (convert_to_base(atoi_num, base_to, to_num));
}
