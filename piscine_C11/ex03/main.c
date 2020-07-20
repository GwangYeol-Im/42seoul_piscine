/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:46:13 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/20 17:55:16 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int		ft_count_if(char **tab, int length, int(*f)(char*));

int     check(char *test)
{
    char *c = "test";
    while (*c)
    {
        if (*c++ != *test++)
            return (0);
    }
    return (1);
}

int     main(void)
{
    char **test = (char **)malloc(sizeof(char *) * 3);
    
    test[0] = "test";
    test[1] = "test";
    test[2] = "test";

    printf("%d", ft_count_if(test, 3, *check));
    return (0);
}