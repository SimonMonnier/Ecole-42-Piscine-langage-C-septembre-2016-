/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 19:52:28 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/14 21:24:11 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list					*ft_list_push_params(int ac, char **av)
{
	t_list				*tmp;
	t_list				*element;
	int					i;

	if (ac == 1)
		return ((void*)0);
	element = (void*)0;
	tmp = ft_create_elem((void*)0);
	i = 1;
	while (i < ac)
	{
		tmp = element;
		element = ft_create_elem(av[i++]);
		element->next = tmp;
	}
	return (element);
}
