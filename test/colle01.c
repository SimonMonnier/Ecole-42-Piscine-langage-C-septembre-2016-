/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 11:36:23 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/04 14:48:17 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printLineFirst(int length, char first, char middle, char end)
{
	int i;
	char rtrnLn;

	rtrnLn = '\n';
	if (length > 0)
	{
		ft_putchar(first);
	}
	else
		write(1, "Do you want hack this ?", 23);
	if (length - 2 >= 0)
	{
		i = 1;
		while (i < length - 1)
		{
			ft_putchar(middle);
			i++;
		}
	}
	length < 0 ? 0: ft_putchar(end);
	ft_putchar(rtrnLn);

}
	
void    ft_printMiddleLine(int length, char first, char middle, char end)
{
	 int i;
	 char rtrnLn;

	 rtrnLn = '\n';
	 if (length > 0)
	 {
		 ft_putchar(first);
	 }
	else
	write(1, "Do you want hack this ?", 23);
	if (length - 2 >= 0)
	{
		i = 1;
		while (i < length - 1)
		{
		ft_putchar(middle);
		i++;
		}
	 }
	length < 0 ? 0: ft_putchar(end);
	ft_putchar(rtrnLn);
}

//int		ft_choice_parameter(int x, int y)

void	colle01(int x, int y)
{
	int cmpt;

	cmpt = 1;
	ft_printLineFirst(x, '/', '*', '\\');
	while (cmpt < y)
	{
		ft_printMiddleLine(x, '*', ' ', '*');
		cmpt++;
	}
	ft_printLineFirst(x, '\\', '*', '/');
}


int		main()
{

	//int width;
	//int height;

	//ft_choice_parameter(&width, &height);
	colle01(100, 50);
	return (0);
}
