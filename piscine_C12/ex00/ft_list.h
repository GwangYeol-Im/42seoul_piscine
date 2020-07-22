/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:07:00 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/22 18:50:39 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CREATE_ELEM_H
# define FT_CREATE_ELEM_H

typedef	struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

#endif