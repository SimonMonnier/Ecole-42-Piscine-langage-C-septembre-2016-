/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:49:26 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/06 22:16:21 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int         n;

	n = 1567;
	ft_putnbr(n);
	ft_putchar('\n');
	return (0);
}

