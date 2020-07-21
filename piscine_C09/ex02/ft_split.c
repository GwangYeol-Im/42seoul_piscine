/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 15:39:11 by gim               #+#    #+#             */
/*   Updated: 2020/07/21 16:14:05 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

int			get_cnt(char *str, char *charset)
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
	return (cnt + 1);
}

char		*create_word(char *str, int srt, int end)
{
	char	*word;
	int		len;
	int		i;

	len = end - srt;
	if (!(word = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0;
	while (srt < end)
		word[i++] = str[srt++];
	word[i] = 0;
	return (word);
}

char		**ft_split(char *str, char *charset)
{
	char	**result;
	int		cnt;
	int		foot_print;
	int		i;
	int		result_i;

	cnt = get_cnt(str, charset);
	if (!(result = (char **)malloc(sizeof(char *) * cnt)))
		return (0);
	result[cnt] = 0;
	foot_print = 0;
	i = 0;
	result_i = 0;
	while (str[i])
	{
		while (in_charset(str[i], charset) && str[i])
			i++;
		foot_print = i;
		while (!in_charset(str[i], charset) && str[i])
			i++;
		result[result_i++] = create_word(str, foot_print, i);
	}
	return (result);
}
