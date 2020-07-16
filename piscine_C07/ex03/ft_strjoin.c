/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:05:19 by gim               #+#    #+#             */
/*   Updated: 2020/07/14 21:06:24 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			get_strs_len(char **strs, int size)
{
	int		i;
	int		char_i;
	int		len;

	len = 0;
	i = 0;
	while (i < size)
	{
		char_i = 0;
		while (strs[i][char_i])
			char_i++;
		len += char_i;
		i++;
	}
	return (len);
}

int			get_seps_len(char *sep, int size)
{
	int		len;

	len = 0;
	while (sep[len])
		len++;
	return (len * (size - 1));
}

int			str_concat(char *result, char *str, int full_len)
{
	int		i;

	i = 0;
	while (str[i])
	{
		result[full_len + i] = str[i];
		i++;
	}
	return (full_len + i);
}

char		*create_blank_str(void)
{
	char	*blank;

	blank = (char *)malloc(sizeof(char) * 1);
	return (blank);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*result;

	if (size == 0)
	{
		return (create_blank_str());
	}
	full_len = get_strs_len(strs, size) + get_seps_len(sep, size);
	result = (char *)malloc(sizeof(char) * (full_len + 1));
	i = 0;
	full_len = 0;
	while (i < size)
	{
		full_len = str_concat(result, strs[i], full_len);
		if (i < size - 1)
			full_len = str_concat(result, sep, full_len);
		i++;
	}
	result[full_len] = '\0';
	return (result);
}
