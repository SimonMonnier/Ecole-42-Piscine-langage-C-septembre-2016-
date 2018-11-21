/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 16:21:53 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/12 23:59:16 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int						ft_any(char **tab, int (*f)(char*));

void                    ft_foreach(int *tab, int length, void(*f)(int));

int						*ft_map(int *tab, int length, int(*f)(int));

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(char *str)
{
	int			i;

	i = 0;
	while (str && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void			ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int					test(int i)
{
	i = i + 100;
	return (i);
}

int							main(void)
{
	int						a[10] = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int						i;
	int						*b;

	b = (int*)malloc(sizeof(*a) * 10);
	b = ft_map(a, 10, &test);
	if (!b)
		return (0);
	i = 0;
	while (i < 10)
	{
		ft_putnbr(a[i]);
		i++;
	}
	i = 0;
	ft_putchar('\n');
	while (i < 10)
	{
		ft_putnbr(b[i]);
		i++;
	}
	return (0);
}



