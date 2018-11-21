/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 18:48:36 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/14 19:11:25 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list				*ft_list_last(t_list *begin_list)
{
	t_list			*last;

	last = begin_list;
	while (last->next)
		last = last->next;
	return (last);
}
