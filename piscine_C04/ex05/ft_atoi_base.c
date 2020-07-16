/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:15:24 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/15 14:42:13 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			change_int(int digit, int dec)
{
	while (dec)
	{
		digit *= 10;
		dec--;
	}
	return (digit);
}

int			change_int_base(char *str, int i, int base_num)
{
	int		result;
	int		num;
	int		dec;

	dec = 0;
	num = 0;
	result = 0;
	while (i)
		num += change_int((int)str[--i] - 48, dec++);
	dec = 0;
	while (1)
	{
		result += change_int(num % base_num, dec++);
		num /= base_num;
		if (num == 0)
			break ;
	}
	return (result);
}

int			ft_atoi(char *str, int base_num)
{
	int		minus;
	int		i;

	minus = 1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			break ;
		else if (*str >= 'a' && *str <= 'z')
			return (0);
		else if (*str >= 'A' && *str <= 'Z')
			return (0);
		else if (*str++ == '-')
			minus *= -1;
	}
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		i++;
	}
	return (change_int_base(str, i, base_num) * minus);
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

int			ft_atoi_base(char *str, char *base)
{
	int		base_num;

	base_num = check_base(base);
	if (!base_num)
		return (0);
	return (ft_atoi(str, base_num));
}
