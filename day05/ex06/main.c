/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:49:26 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/06 23:36:27 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int				ft_strcmp(char *s1, char *s2);	
void			ft_putchar(char c);
void			ft_putnbr(int n);

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

	ft_putnbr(ft_strcmp(a, b));
	ft_putchar('\n');
	return (0);
}

