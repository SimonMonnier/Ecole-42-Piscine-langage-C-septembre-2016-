/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 22:40:39 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/04 23:16:28 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_first_line(int length, char first, char middle, char end)
{
	int i;

	if (length > 0)
	{
		ft_putchar(first);
	}
	if (length - 2 >= 0)
	{
		i = 1;
		while (i < length - 1)
		{
			ft_putchar(middle);
			i++;
		}
		length < 0 ? 0 : ft_putchar(end);
	}
	ft_putchar('\n');
}

void	ft_print_middle_line(int length, char first, char middle, char end)
{
	int i;

	if (length > 0)
	{
		ft_putchar(first);
	}
	if (length - 2 >= 0)
	{
		i = 1;
		while (i < length - 1)
		{
			ft_putchar(middle);
			i++;
		}
		length < 0 ? 0 : ft_putchar(end);
	}
	ft_putchar('\n');
}

void	ft_print_end_line(int length, char first, char middle, char end)
{
	int i;

	if (length > 0)
	{
		ft_putchar(first);
	}
	if (length - 2 >= 0)
	{
		i = 1;
		while (i < length - 1)
		{
			ft_putchar(middle);
			i++;
		}
		length < 0 ? 0 : ft_putchar(end);
	}
	ft_putchar('\n');
}

void	colle04(int x, int y)
{
	int cmpt;

	cmpt = 1;
	if ((x < 0) || (y < 0))
	{
		write(1, "hey !!! you wanna hack my program bro !", 39);
		ft_putchar('\n');
		return ;
	}
	if (x == 0 || y == 0)
		return ;
	ft_print_first_line(x, 'A', 'B', 'C');
	if (y >= 1)
	{
		while (cmpt <= y - 2)
		{
			ft_print_middle_line(x, 'B', ' ', 'B');
			cmpt++;
		}
		if (y != 1)
			ft_print_end_line(x, 'C', 'B', 'A');
	}
}
