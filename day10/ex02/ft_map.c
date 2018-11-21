/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 17:16:25 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/13 00:02:00 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					*ft_map(int *tab, int length, int (*f)(int))
{
	int				*tab_dest;
	int				index;

	if (!tab)
		return ((void*)0);
	tab_dest = (int*)malloc(sizeof(int) * length);
	if (!tab_dest)
		return ((void*)0);
	index = 0;
	while (index < length)
	{
		tab_dest[index] = f(tab[index]);
		index++;
	}
	return (tab_dest);
}
