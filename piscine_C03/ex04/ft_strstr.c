/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:48:52 by gim               #+#    #+#             */
/*   Updated: 2020/07/09 17:15:59 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int		subidx;

	if (!*to_find)
	{
		return (str);
	}
	subidx = 0;
	while (*str)
	{
		if (*str++ == to_find[subidx])
		{
			subidx++;
		}
		else
		{
			subidx = 0;
		}
		if (!to_find[subidx])
		{
			str -= subidx;
			return (str);
		}
	}
	return (0);
}
