/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 12:16:13 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/03 17:47:46 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}




int		colle(int x, int y)
{
	char tab[x] [y];
	int i;
	int j;
	int c;

	c = 1;
	j = 1;
	i = 1;
	tab[0] [0] = 111;
	tab[0] [y] = 111;
	tab[x] [0] = 111;
	tab[x] [y] = 111;

	ft_putchar(tab[0] [0]);
	while (j < x)
	{
		ft_putchar(tab[i] [0]);
		i++;
		j++;
		tab[i] [0] = 45;
	}
	i = 1;
	j = 1;
	ft_putchar(tab[x] [0]);
	ft_putchar('\n');
	while ( j < y  && j < x) 
	    {
			ft_putchar(tab[0] [i]);
			while (c < (x - 2))
					{
					ft_putchar(' ');
					c++;
					}
			ft_putchar(tab[i] [x]);
			ft_putchar('\n');
			i++;
			j++;
			tab[0] [i] = 124;
		}
	i = 1;
	j = 1;
		ft_putchar(tab[0] [y]);
		while (j < y && j < x)
		    {
				ft_putchar(tab[i] [y]);
				i++;
				j++;
				tab[i] [0] = 45;
				tab[0] [i] = 124;
			}
			ft_putchar(tab[x] [y]);
			ft_putchar('\n');
			return (0);
}


int		main(int argc, char *argv[])
{

colle(5,5);

}
