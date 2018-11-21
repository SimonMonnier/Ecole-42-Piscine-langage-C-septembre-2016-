/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_colle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 02:29:41 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 19:25:05 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_print_all(char *str, int x, int y, int n)
{
	if (n == 1)
		ft_putstr(" || ");
	ft_putstr(str);
	ft_putstr(" [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	return (1);
}

void	ft_print_colle(int soluce, int x, int y)
{
	int n;

	n = 0;
	if (soluce / 10000 == 1)
		n = ft_print_all("[colle-00]", x, y, n);
	if (soluce % 10000 / 1000 == 2)
		n = ft_print_all("[colle-01]", x, y, n);
	if (soluce % 1000 / 100 == 3)
		n = ft_print_all("[colle-02]", x, y, n);
	if (soluce % 100 / 10 == 4)
		n = ft_print_all("[colle-03]", x, y, n);
	if (soluce % 10 == 5)
		n = ft_print_all("[colle-04]", x, y, n);
	ft_putstr("\n");
}
