/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:49:26 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/09 15:40:41 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int				ft_strncpy(char *dest, char *src, unsigned int n);	

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int n);
void			ft_putstr(char *str);
char			*ft_strstr(char *str, char *to_find);
char            *ft_rot42(char *str);
int				ft_button(int i, int j, int k);
int             main(void)
{
//	ft_putchar('\n');
	char		***factory;
	char		**a;
	char		*c;
	**factory = *a;
	a[0] = c;
	c = "salut";

	ft_destroy(factory);

	return (0);
}

