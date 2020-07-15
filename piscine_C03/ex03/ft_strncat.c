/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:25:00 by gim               #+#    #+#             */
/*   Updated: 2020/07/09 16:40:57 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (nb)
	{
		dest[i++] = *src++;
		if (!*src)
		{
			dest[i] = '\0';
			return (dest);
		}
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
