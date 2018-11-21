/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 23:14:53 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/14 23:20:41 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list						*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list					*n_element;
	unsigned int			i;

	i = 0;
	n_element = begin_list;
	while (i != nbr)
	{
		n_element = n_element->next;
		i++;
	}
	return (n_element);
}
