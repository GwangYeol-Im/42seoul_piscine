/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:32:14 by gim               #+#    #+#             */
/*   Updated: 2020/07/08 17:01:39 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int answer;

	answer = 1;
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			answer = 0;
		}
		str++;
	}
	return (answer);
}
