/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 12:15:31 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/08 13:05:23 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int								ft_ultimate_range(int **range, int min, int max)
{
	int							*tb;
	int							index;
	int							length;

	length = max - min + 1;
	if (min <= max)
	{
		*range = (void*)0;
		return (0);
	}
	tb = (int*)malloc(sizeof(*tb) * (length));
	index = 0;
	while (index < length)
	{
		tb[index] = min;
		index++;
		min++;
	}
	*range = tb;
	return (index);
}
