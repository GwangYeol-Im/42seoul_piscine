/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 16:59:34 by gim               #+#    #+#             */
/*   Updated: 2020/07/22 14:44:34 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int			get_len(char **tab)
{
	int		len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		sort;
	int		len;

	len = get_len(tab);
	i = 0;
	while (tab[i])
	{
		sort = 0;
		while (sort < len - i - 1)
		{
			if (cmp(tab[sort], tab[sort + 1]))
				ft_swap(&tab[sort], &tab[sort + 1]);
			sort++;
		}
		i++;
	}
}
