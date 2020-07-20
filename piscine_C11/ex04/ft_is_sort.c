/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:57:25 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/20 18:46:36 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int         check_sort(int *tab, int length)
{
    int     i;

    i = 0;
    if (tab[0] > tab[1])
    {
        while (i < length - 1)
        {
            if (tab[i] < tab[i + 1])
                return (0);
        }
    }
    while (i < length - 1)
    {
        if (tab[i] > tab[i + 1])
            return (0);
    }
    return (1);
}

int         ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    
}