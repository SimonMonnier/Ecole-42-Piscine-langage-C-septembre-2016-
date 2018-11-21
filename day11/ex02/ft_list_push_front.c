/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 15:15:08 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/14 19:33:04 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void						ft_list_push_front(t_list **begin_list, void *data)
{
	t_list				*first;

	first = ft_create_elem(data);
	first->next = *begin_list;
	*begin_list = first;
}
