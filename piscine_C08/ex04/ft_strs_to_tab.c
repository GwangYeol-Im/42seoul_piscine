/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 13:36:37 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/20 11:49:50 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					get_len(char *str)
{	int				len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char				*ft_strcpy(char *str, int size)
{
	char			*dest;
	int				i;

	if (!(dest = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	while (*str)
		dest[i++] = *str++;
	dest[i] = 0;
	return (dest);
}

t_stock_str			*get_stock_str(t_stock_str *stt, char *str)
{
	stt->str = str;
	stt->size = get_len(str);
	stt->copy = ft_strcpy(str, stt->size);
	if (!stt->copy)
		return (0);
	return (stt);
}

void				free_tab(t_stock_str *tab, int size)
{
	int				i;
	
	i = 0;
	while (i < size)
		free(tab[i++].copy);
	free(tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*result;
	t_stock_str		*temp;
	int				i;

	i = 0;
	if (!(result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	result[ac].str = 0;
	while (i < ac)
	{
		if (!(temp = get_stock_str(&result[i], av[i])))
		{
			free_tab(result, i);
			return (0);
		}
		i++;
	}
	return (result);
};
