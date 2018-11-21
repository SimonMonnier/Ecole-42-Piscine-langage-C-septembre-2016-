/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 19:44:27 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/14 14:23:19 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void						ft_list_push_back(t_list **begin_list, void *data)
{
	t_list					*last;

	last = *begin_list;
	while (last->next)
		last = last->next;
	last->next = ft_create_elem(data);
}
