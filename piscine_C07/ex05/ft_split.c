/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 20:00:45 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/17 20:39:23 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

int			count_array(char *str, char *charset)
{
	int		cnt;
	
	cnt = 0;
	while (*str)
	{
		while (in_charset(*str, charset) && *str)
			str++;
		if (!*str)
			break ;
		cnt++;
		while (!in_charset(*str, charset) && *str)
			str++;
	}
	return (cnt);
}

char		*split_str(char *str, int srt, int end)
{
	char	*result;
	int		len;
	int		i;

	i = 0;
	len = end - srt;
	result = (char *)malloc(sizeof(char) * (len + 1));
	while (srt < end)
		result[i++] = str[srt++];
	result[i] = '\0';
	return (result);
}

char		**ft_split(char *str, char *charset)
{
	int		len;
	int		i;
	int		foot_print;
	int		result_i;
	char	**result;

	len = count_array(str, charset);
	if (!(result = (char **)malloc(sizeof(char *) * (len + 1))))
		return (0);
	i = 0;
	result_i = 0;
	while (str[i])
	{
		while (in_charset(str[i], charset) && str[i])
			i++;
		if (!str[i])
			break ;
		foot_print = i;
		while (!in_charset(str[i], charset) && str[i])
			i++;
		result[result_i++] = split_str(str, foot_print, i);
	}
	result[i] = 0;
	return (result);
}