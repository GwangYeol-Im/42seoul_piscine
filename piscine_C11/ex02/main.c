/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:46:13 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/20 17:51:38 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int		ft_any(char **tab, int(*f)(char*));

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
    
    test[0] = "te";
    test[1] = "tesq";
    test[2] = "tees";

    printf("%d", ft_any(test, *check));
    return (0);
}