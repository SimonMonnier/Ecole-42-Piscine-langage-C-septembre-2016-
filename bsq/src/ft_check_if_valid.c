/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 17:30:52 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/21 23:32:30 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_check_lines_nb(t_bsq *bsq)
{
	int		i;

	i = 0;
	while (i < bsq->map_heigth)
	{
		if (bsq->map_line_width != ft_strlen(bsq->map[i]))
			return (1);
		i++;
	}
	return (0);
}

void		ft_create_pattern(t_bsq *bsq)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (bsq->first_line[i] != '\0')
	{
		if (!(bsq->first_line[i] >= '0' && bsq->first_line[i] <= '9'))
			bsq->pattern[j++] = bsq->first_line[i++];
		else
			i++;
	}
}

int			ft_check_char(t_bsq *bsq)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (bsq->map[i])
	{
		while (bsq->map[i][j] != '\0')
		{
			if (bsq->map[i][j] == bsq->pattern[0]
					|| bsq->map[i][j] == bsq->pattern[1]
					|| bsq->map[i][j] == bsq->pattern[2])
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int			ft_check_map(t_bsq *bsq)
{
	int		error;

	error = 0;
	if (ft_check_lines_nb(bsq) == 1)
		error = 1;
	ft_create_pattern(bsq);
	if (ft_check_char(bsq) == 1)
		error = 1;
	if (error == 1)
	{
		write(2, "map error\n", ft_strlen("map error\n"));
		return (1);
	}
	return (0);
}
