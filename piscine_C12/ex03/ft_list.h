/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:07:00 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/23 04:16:48 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CREATE_ELEM_H
# define FT_CREATE_ELEM_H

typedef	struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;
t_list 					*ft_create_elem(void *data);

#endif
