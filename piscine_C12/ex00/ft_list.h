/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:07:00 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/07/23 03:58:31 by gim              ###   ########.fr       */
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
