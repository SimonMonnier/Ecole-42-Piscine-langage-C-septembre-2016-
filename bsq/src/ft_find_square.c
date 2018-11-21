/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 06:22:58 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/21 23:35:08 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int				ft_is_square(t_target *target, t_bsq *bsq)
{
	int			i;
	int			j;

	i = target->y;
	while (i < bsq->dimension + target->y)
	{
		if (!bsq->map[i])
			break ;
		j = target->x;
		while (j < bsq->dimension + target->x && bsq->map[i][j])
		{
			if (!bsq->map[i][j])
				break ;
			if (bsq->map[i][j] == bsq->pattern[1])
				return (0);
			j++;
		}
		i++;
	}
	if (!bsq->map[i] || !bsq->map[i][j])
		return (0);
	return (1);
}

void			new_found(t_bsq *bsq, t_target *target)
{
	bsq->found.target.y = target->y;
	bsq->found.target.x = target->x;
	bsq->found.dimension = bsq->dimension;
}

void			ft_find_square(t_bsq *bsq, t_target *target)
{
	int			y;
	int			x;

	y = 0;
	while (y < bsq->map_heigth)
	{
		x = 0;
		while (x < bsq->map_line_width)
		{
			if (bsq->map[y][x] != bsq->pattern[1])
			{
				target->x = x;
				target->y = y;
				if (ft_is_square(target, bsq) == 1)
				{
					++bsq->dimension;
					new_found(bsq, target);
					--x;
				}
			}
			x++;
		}
		y++;
	}
}
