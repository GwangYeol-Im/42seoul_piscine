/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:02:23 by gim               #+#    #+#             */
/*   Updated: 2020/07/16 22:29:52 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		split_str(char **result, int foot_print, int split, int idx)
{
	if (foot_print < split)
	{}
}		

int			in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
	}
	return (0);
}

char		**ft_split(char *str, char *charset)
{
	int		i;
	int		foot_print;
	int		result_i;
	char	**result;

	i = 0;
	foot_print = 0;
	while (str[i])
	{
		if (!in_charset(str[i], charset))
		{
			split_str(result, foot_print, i, result_i++);
			foot_print = i + 1;
		}
		i++;
	}
}
