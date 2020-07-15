/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:21:31 by gim               #+#    #+#             */
/*   Updated: 2020/07/09 20:16:46 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					getlen(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	dstlen;

	srclen = 0;
	dstlen = 0;
	while (src[srclen])
	{
		srclen++;
	}
	while (dest[dstlen])
	{
		dstlen++;
	}
	if (size > dstlen)
	{
		return (dstlen + srclen);
	}
	return (size + srclen);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				len;
	unsigned int	i;

	len = getlen(dest, src, size);
	i = 0;
	while (dest[i])
	{
		i++;
	}
	if (size > i)
	{
		while (i < size)
		{
			if (!*src)
			{
				dest[i] = '\0';
				return (len);
			}
			dest[i++] = *src++;
		}
		dest[size - 1] = '\0';
	}
	return (len);
}
