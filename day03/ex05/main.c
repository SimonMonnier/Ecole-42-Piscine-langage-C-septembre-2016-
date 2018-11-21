/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:49:26 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/07 16:34:48 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int				ft_strcmp(char *s1, char *s2);	
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putstr(char *);
int             ft_strlen(char *str)
{
	int         i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

int             main(void)
{
	char	a[] = "salut";
	char	b[] = "salut";

	ft_putstr(a);
	ft_putstr(b);
	ft_putchar('\n');
	return (0);
}

