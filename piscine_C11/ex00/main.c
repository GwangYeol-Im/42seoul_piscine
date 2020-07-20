/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 16:57:07 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/20 17:21:51 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void		ft_foreach(int *tab, int length, void(*f)(int));

void        plus(int n)
{
    char c = n + '0';
    write(1, &c, 1);
}

int     main(void)
{
    int i = 0;
    int length = 4;
    int *test = (int *)malloc(sizeof(int) * length);
    
    while (test[i])
        test[i++] = 0;
    ft_foreach(test, length, *plus);
    return (0);
}