/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 13:37:52 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/11 21:54:00 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
int		ft_check_validity(int argc, char **argv);

int	ft_solve_sudoku(int argc, char **argv, int i)
{
	int c;
	int y;
	char tmp;

	c = 1;
	y = 1;
	if (i == 90)
		return (1);

	if (argv[y][i] != 46)
	{
		return ft_solve_sudoku(argc, argv, i + 1);
	}

	while (c <= 9)
	{
		tmp = argv[y][i];
		argv[y][i] = c + '0';
		if (ft_check_validity(argc, argv) == 0)
		{
			if (ft_solve_sudoku(argc, argv, i + 1))
				return (1);
		}
		else
			argv[y][i] = tmp;
		if (i == 9)
		{
			y++;
		}
		if (y == 9)
		{
			i = 0;
		}
		c++;
	}
	argv[y][i] = 46;
	return (0);
}
