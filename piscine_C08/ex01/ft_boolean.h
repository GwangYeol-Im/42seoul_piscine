/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 21:46:17 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/19 13:32:34 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(num) num % 2 == 0 ? 1 : 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

typedef char    t_bool;

#endif