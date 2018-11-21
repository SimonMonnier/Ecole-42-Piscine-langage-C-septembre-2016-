/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:49:26 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/08 06:39:47 by smonnier         ###   ########.fr       */
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

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int             main(void)
{
	char	b[] = "salut comment tu va ma gueule , trankill ?";

	printf("%s",ft_strdup(b));
//	ft_putchar('\n');
	return (0);
}

