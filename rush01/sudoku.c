/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 19:47:54 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/11 23:10:22 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void										ft_putchar(char c)
{
	write(1, &c, 1);
}

int											ft_strlen(char *str)
{
	int										len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void										ft_putstr(char *str)
{
	int										i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i++]);
		ft_putchar(' ');

	}
}

int     									ft_check_linear(int argc, char **argv, int i, int y)
{
	int c;

	while (i < argc)
	{
		c = 0;
		while (c <= 9)
		{
			if (y != c && argv[i][y] == argv[i][c] 
					&& argv[i][c] != '.' &&  argv[y][c] != '.')
				return (1);
			y++;
			if (y == 9)
			{
				c++;
				y = 0;
			}
		}
		i++;
	}
	return (0);
}

int     									ft_check_vert(int argc, char **argv, int i, int y)
{
	int										c;

	
	c = 0;
	while (i < argc )
	{
		if ((argv[i][c] == argv[y][c]) && i != y 
				&& argv[i][c] != '.' && argv[y][c] != '.')
			return (1);
		y++;
		if (y == 9)
		{
			c++;
			y = 2;
		}
		if (c == 8)
		{
			c = 0;
			i++;
		}
	}
	return (0);
}



int     									ft_check_square_one(char **tb)
{
	if ((tb[1][0] == tb[2][1] || tb[1][0] == tb[3][2] || tb[1][0] == tb[2][2] 
				|| tb[1][0] == tb[3][1]) && tb[1][0] != '.')
		return (1);
	if ((tb[2][0] == tb[1][1] || tb[2][0] == tb[1][2] || tb[2][0] == tb[3][1] 
				|| tb[2][0] == tb[3][2]) && tb[2][0] != '.')
		return (1);
	if ((tb[3][0] == tb[2][1] || tb[3][0] == tb[1][1] || tb[3][0] == tb[2][2] 
				|| tb[3][0] == tb[1][2]) && tb[3][0] != '.')
		return (1);
	if ((tb[1][1] == tb[2][2] && tb[1][1] != '.') 
			|| (tb[2][2] == tb[3][1] && tb[2][2] != '.') 
			|| (tb[3][1] == tb[2][0] && tb[3][1] != '.') 
			|| (tb[2][0] == tb[1][1] && tb[2][0] != '.'))
		return (1);
	return (0);
}

int     									ft_check_square_two(char **tb)
{
	if ((tb[1][3] == tb[2][4] || tb[1][3] == tb[3][5] || tb[1][3] == tb[2][5] 
				|| tb[1][3] == tb[3][4]) && tb[1][3] != '.')
		return (1);
	if ((tb[2][3] == tb[1][4] || tb[2][3] == tb[1][5] || tb[2][3] == tb[3][4] 
				|| tb[2][3] == tb[3][5]) && tb[2][3] != '.')
		return (1);
	if ((tb[3][3] == tb[2][4] || tb[3][3] == tb[1][4] || tb[3][3] == tb[2][5] 
				|| tb[3][3] == tb[1][5]) && tb[3][3] != '.')
		return (1);
		if ((tb[1][4] == tb[2][5] && tb[1][4] != '.') 
			|| (tb[2][5] == tb[3][4] && tb[2][5] != '.') 
			|| (tb[3][4] == tb[2][3] && tb[3][4] != '.') 
			|| (tb[2][3] == tb[1][4] && tb[2][3] != '.'))
		return (1);
	return (0);
}

int     									ft_check_square_three(char **tb)
{
	if ((tb[1][6] == tb[2][7] || tb[1][6] == tb[3][8] || tb[1][6] == tb[2][8] 
				|| tb[1][6] == tb[3][7]) && tb[1][6] != '.')
		return (1);
	if ((tb[2][6] == tb[1][7] || tb[2][6] == tb[1][8] || tb[2][6] == tb[3][7] 
				|| tb[2][6] == tb[3][8]) && tb[2][6] != '.')
		return (1);
	if ((tb[3][6] == tb[2][7] || tb[3][6] == tb[1][7] || tb[3][6] == tb[2][8] 
				|| tb[3][6] == tb[1][8]) && tb[3][6] != '.')
		return (1);
		if ((tb[1][7] == tb[2][8] && tb[1][7] != '.') 
			|| (tb[2][8] == tb[3][7] && tb[2][8] != '.') 
			|| (tb[3][7] == tb[2][6] && tb[3][7] != '.') 
			|| (tb[2][6] == tb[1][7] && tb[2][6] != '.'))
		return (1);
	return (0);
}

int     									ft_check_square_four(char **tb)
{
	if ((tb[4][0] == tb[5][1] || tb[4][0] == tb[6][2] || tb[4][0] == tb[5][2] 
				|| tb[4][0] == tb[6][1]) && tb[4][0] != '.')
		return (1);
	if ((tb[5][0] == tb[4][1] || tb[5][0] == tb[4][2] || tb[5][0] == tb[6][1] 
				|| tb[5][0] == tb[6][2]) && tb[5][0] != '.')
		return (1);
	if ((tb[6][0] == tb[5][1] || tb[6][0] == tb[4][1] || tb[6][0] == tb[5][2] 
				|| tb[6][0] == tb[4][2]) && tb[6][0] != '.')
		return (1);
		if ((tb[4][1] == tb[5][2] && tb[4][1] != '.') 
			|| (tb[5][2] == tb[6][1] && tb[5][2] != '.') 
			|| (tb[6][1] == tb[5][0] && tb[6][1] != '.') 
			|| (tb[5][0] == tb[4][1] && tb[5][0] != '.'))
		return (1);
	return (0);
}

int     									ft_check_square_five(char **tb)
{
	if ((tb[4][3] == tb[5][4] || tb[4][3] == tb[6][5] || tb[4][3] == tb[5][5] 
				|| tb[4][3] == tb[6][4]) && tb[4][3] != '.')
		return (1);
	if ((tb[5][3] == tb[4][4] || tb[5][3] == tb[4][5] || tb[5][3] == tb[6][4] 
				|| tb[5][3] == tb[6][5]) && tb[5][3] != '.')
		return (1);
	if ((tb[6][3] == tb[5][4] || tb[6][3] == tb[4][4] || tb[6][3] == tb[5][5] 
				|| tb[6][3] == tb[4][5]) && tb[6][3] != '.')
		return (1);
		if ((tb[4][4] == tb[5][5] && tb[4][4] != '.') 
			|| (tb[5][5] == tb[6][4] && tb[5][5] != '.') 
			|| (tb[6][4] == tb[5][3] && tb[6][4] != '.') 
			|| (tb[5][3] == tb[4][4] && tb[5][3] != '.'))
		return (1);
	return (0);
}

int     									ft_check_square_six(char **tb)
{
	if ((tb[4][6] == tb[5][7] || tb[4][6] == tb[6][8] || tb[4][6] == tb[5][8] 
				|| tb[4][6] == tb[6][7]) && tb[4][6] != '.')
		return (1);
	if ((tb[5][6] == tb[4][7] || tb[5][6] == tb[4][8] || tb[5][6] == tb[6][7] 
				|| tb[5][6] == tb[6][8]) && tb[5][6] != '.')
		return (1);
	if ((tb[6][6] == tb[5][7] || tb[6][6] == tb[4][7] || tb[6][6] == tb[5][8] 
				|| tb[6][6] == tb[4][8]) && tb[6][6] != '.')
		return (1);
		if ((tb[4][7] == tb[5][8] && tb[4][7] != '.') 
			|| (tb[5][8] == tb[6][7] && tb[5][8] != '.') 
			|| (tb[6][7] == tb[5][6] && tb[6][7] != '.') 
			|| (tb[5][6] == tb[4][7] && tb[5][6] != '.'))
		return (1);
	return (0);
}

int     									ft_check_square_seven(char **tb)
{
	if ((tb[7][0] == tb[8][1] || tb[7][0] == tb[9][2] || tb[7][0] == tb[8][2] 
				|| tb[7][0] == tb[9][1]) && tb[7][0] != '.')
		return (1);
	if ((tb[8][0] == tb[7][1] || tb[8][0] == tb[7][2] || tb[8][0] == tb[9][1] 
				|| tb[8][0] == tb[9][2]) && tb[8][0] != '.')
		return (1);
	if ((tb[9][0] == tb[8][1] || tb[9][0] == tb[7][1] || tb[9][0] == tb[8][2] 
				|| tb[9][0] == tb[7][2]) && tb[9][0] != '.')
		return (1);
		if ((tb[7][1] == tb[8][2] && tb[7][1] != '.') 
			|| (tb[8][2] == tb[9][1] && tb[8][2] != '.') 
			|| (tb[9][1] == tb[8][0] && tb[9][1] != '.') 
			|| (tb[8][0] == tb[7][1] && tb[8][0] != '.'))
		return (1);
	return (0);
}

int     									ft_check_square_eight(char **tb)
{
	if ((tb[7][3] == tb[8][4] || tb[7][3] == tb[9][5] || tb[7][3] == tb[8][5] 
				|| tb[7][3] == tb[9][4]) && tb[7][3] != '.')
		return (1);
	if ((tb[8][3] == tb[7][4] || tb[8][3] == tb[7][5] || tb[8][3] == tb[9][4] 
				|| tb[8][3] == tb[9][5]) && tb[8][3] != '.')
		return (1);
	if ((tb[9][3] == tb[8][4] || tb[9][3] == tb[7][4] || tb[9][3] == tb[8][5] 
				|| tb[9][3] == tb[7][5]) && tb[9][3] != '.')
		return (1);
		if ((tb[7][4] == tb[8][5] && tb[7][4] != '.') 
			|| (tb[8][5] == tb[9][4] && tb[8][5] != '.') 
			|| (tb[9][4] == tb[8][3] && tb[9][4] != '.') 
			|| (tb[8][3] == tb[7][4] && tb[8][3] != '.'))
		return (1);
	return (0);
}

int     									ft_check_square_nine(char **tb)
{
	if ((tb[7][6] == tb[8][7] || tb[7][6] == tb[9][8] || tb[7][6] == tb[8][8] 
				|| tb[7][6] == tb[9][7]) && tb[7][6] != '.')
		return (1);
	if ((tb[8][6] == tb[7][7] || tb[8][6] == tb[7][8] || tb[8][6] == tb[9][7] 
				|| tb[8][6] == tb[9][8]) && tb[8][6] != '.')
		return (1);
	if ((tb[9][6] == tb[8][7] || tb[9][6] == tb[7][7] || tb[9][6] == tb[8][8] 
				|| tb[9][6] == tb[7][8]) && tb[9][6] != '.')
		return (1);
		if ((tb[7][7] == tb[8][8] && tb[7][7] != '.') 
			|| (tb[8][8] == tb[9][7] && tb[8][8] != '.') 
			|| (tb[9][7] == tb[8][6] && tb[9][7] != '.') 
			|| (tb[8][6] == tb[7][7] && tb[8][6] != '.'))
		return (1);
	return (0);
}

int											ft_check_square(char **tb)
{
	int i;

	i = 0;
	i = i + ft_check_square_one(tb);
	i = i + ft_check_square_two(tb);
	i = i + ft_check_square_three(tb);
	i = i + ft_check_square_four(tb);
	i = i + ft_check_square_five(tb);
	i = i + ft_check_square_six(tb);
	i = i + ft_check_square_seven(tb);
	i = i + ft_check_square_eight(tb);
	i = i + ft_check_square_nine(tb);
	return (i);
}

int											main(int argc, char **argv)
{
	int										i_argv;
	int										i_argc;
	int										len_argv[10];
	int										linear;
	int										vert;
	int										square;

	if (argc != 10)
		return (write(1, "Erreur\n", 7));
	i_argv = 1;
	i_argc = 1;
	while (argv[i_argc])
	{
		len_argv[i_argc] = ft_strlen(argv[i_argc]);
		if (len_argv[i_argc] == 9)
			i_argc++;
		else
			return (write(1, "Erreur\n", 7));
	}
	linear = ft_check_linear(argc, argv, 1, 0);
	vert = ft_check_vert(argc, argv, 1, 1);
	square = ft_check_square(argv);
	if (linear == 1 || vert == 1 || square > 0)
		return (write(1, "Erreur\n", 7));
	while (i_argv != 10)
	{
		ft_putstr(argv[i_argv]);
		ft_putchar('\n');
		i_argv++;
	}
	return (0);
}
