/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:49:26 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/08 12:54:55 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int				ft_strncpy(char *dest, char *src, unsigned int n);	
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putstr(char *str);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strdup(char *str);
int				*ft_range(int min, int max);

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

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int             main(void)
{
	//	char	b[] = "salut comment tu va ma gueule , trankill ?";
	int			min;
	int			max;
	int			i;
	int			*test;


	i = 0;
	min = -8;
	max = 43;
	test = ft_range(min, max);
	while (i < max - min)
		ft_putnbr(test[i++]);
	//	ft_putchar('\n');
	return (0);
}

