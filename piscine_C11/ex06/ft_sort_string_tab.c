/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 16:59:34 by gim               #+#    #+#             */
/*   Updated: 2020/07/21 19:54:19 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (0);
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	return (0);
}

int			get_len(char **tab)
{
	int		len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

void		ft_sort_string_tab(char **tab)
{
	int		i;
	int		cmp;
	int		len;

	len = get_len(tab);
	i = 0;
	while (tab[i])
	{
		cmp = 0;
		while (cmp < len - i - 1)
		{
			if (ft_strcmp(tab[cmp], tab[cmp + 1]))
				ft_swap(&tab[cmp], &tab[cmp + 1]);
			cmp++;
		}
		i++;
	}
}
