/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:38:13 by gim               #+#    #+#             */
/*   Updated: 2020/07/09 15:49:25 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			if (!s1[i] || !s2[i] || s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
			i++;
		}
	}
	return (0);
}
