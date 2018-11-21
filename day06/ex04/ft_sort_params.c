/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 22:43:39 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/07 23:43:18 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putchar(char c);

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putstr(char *str)
{
	int				index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int					ft_strcmp(char *s1, char *s2)
{
	int				i;

	i = 0;
	while (s1 && s2 && s1[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

void				ft_swap(char *a, char *b)
{
	char				c;

	if (*a < 0)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}

int					main(int argc, char **argv)
{
	int				i;
	char			*a= "~";
	int				j;
	int				sort;

	sort = argc;
	i = 1;
	j = 2;
	while (argc && i < argc)
	{
		if (i >= 2147483647)
			break ;
		while (argv[sort] <= a)
		{
			ft_swap(argv[i], argv[j]);
			i++;
			j++;
		}
		i = 1;
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
