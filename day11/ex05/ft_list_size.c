/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 15:54:33 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/14 18:42:14 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int												ft_list_size(t_list *begin_list)
{
	int											nbr_elem;
	t_list										*last;

	nbr_elem = 0;
	last = begin_list;
	while (last)
	{
		last = last->next;
		nbr_elem++;
	}
	return (nbr_elem);
}
