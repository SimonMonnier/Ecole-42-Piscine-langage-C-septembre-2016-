/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 19:46:56 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/21 23:29:15 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_buffer(t_bsq *bsq, int fd)
{
	char	*str;
	char	**tab_origin;
	char	buf[BUF_SIZE + 1];
	int		ret;

	str = NULL;
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		str = ft_fill_str(str, buf, ret);
	}
	tab_origin = ft_cut_in_line(str, "\n");
	if (tab_origin && tab_origin[2] != NULL)
	{
		bsq->map_heigth = ft_atoi(tab_origin[0]);
		bsq->map = &tab_origin[1];
		bsq->map_line_width = ft_strlen(bsq->map[0]);
		bsq->first_line = tab_origin[0];
	}
	else
		write(2, "map error1\n", ft_strlen("map error1\n"));
}
