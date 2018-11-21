/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:49:26 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/09 11:36:41 by smonnier         ###   ########.fr       */
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

int             main(void)
{
//	int		i;
	char	b[] = "salut comment tu va ma gueule , trankill ?";

//	i = 0;
//	while (i < 43 )
//	{
	printf("%s",ft_rot42(b));
//	i++;
//	}
	ft_putchar('\n');
	return (0);
}

