/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:13:42 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 23:41:03 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int						treat_map(char *av)
{
	int					fd;
	t_bsq				bsq;
	t_target			target;

	if ((fd = open(av, O_RDONLY)) != -1)
		ft_buffer(&bsq, fd);
	else
	{
		write(2, "map error\n", 10);
		return (0);
	}
	if (ft_check_map(&bsq) == 1)
		return (0);
	ft_find_square(&bsq, &target);
	write_square(&bsq);
	ft_print_map(&bsq);
	return (1);
}

int						main(int ac, char **av)
{
	int					i;
	t_bsq				bsq;

	if (ac < 2)
	{
		ft_buffer(&bsq, 0);
		ft_check_map(&bsq);
	}
	else
	{
		i = 1;
		while (av[i])
		{
			bsq.found.target.y = 0;
			bsq.found.target.x = 0;
			bsq.dimension = 2;
			treat_map(av[i]);
			++i;
		}
	}
	return (0);
}
