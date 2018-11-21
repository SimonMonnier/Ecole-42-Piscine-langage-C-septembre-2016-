/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 22:02:08 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/21 23:26:17 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void				write_square(t_bsq *bsq)
{
	int				i;
	int				j;

	i = bsq->found.target.y;
	while (i < bsq->found.target.y + bsq->found.dimension)
	{
		j = bsq->found.target.x;
		while (j < bsq->found.target.x + bsq->found.dimension)
		{
			bsq->map[i][j] = 'X';
			++j;
		}
		++i;
	}
}
