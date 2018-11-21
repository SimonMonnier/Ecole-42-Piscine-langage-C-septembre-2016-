/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 05:55:04 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/08 12:12:51 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int													*ft_range(int min, int max)
{
	int												*tb_value;
	int												index;
	int												len;

	len = max - min + 1;
	if (min >= max)
		return ((void*)0);
	tb_value = (int*)malloc(sizeof(*tb_value) * (len));
	index = 0;
	while (index < len)
	{
		tb_value[index] = min;
		index++;
		min++;
	}
	return (tb_value);
}
