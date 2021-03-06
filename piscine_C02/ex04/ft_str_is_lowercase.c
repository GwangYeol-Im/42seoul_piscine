/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:35:12 by gim               #+#    #+#             */
/*   Updated: 2020/07/08 17:14:41 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int answer;

	answer = 1;
	while (*str != '\0')
	{
		if (!(*str >= 97 && *str <= 122))
		{
			answer = 0;
		}
		str++;
	}
	return (answer);
}
