/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 04:36:29 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/21 23:33:59 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void						ft_print_square(t_bsq *bsq)
{
	register int			y;
	register int			x;

	y = bsq->found.target.y;
	while (y < y + bsq->found.dimension)
	{
		x = bsq->found.target.x;
		while (x < x + bsq->found.dimension)
		{
			bsq->map[y][x] = bsq->pattern[2];
			++x;
		}
		++y;
	}
}

void						ft_print_map(t_bsq *bsq)
{
	register int			y;
	register int			x;

	y = -1;
	while (++y < bsq->map_heigth)
	{
		x = -1;
		while (++x < bsq->map_line_width)
		{
			if (y == bsq->found.target.y && x == bsq->found.target.x)
				ft_print_square(bsq);
			++x;
		}
		ft_putstr(bsq->map[++y]);
	}
}
