/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 21:21:23 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/07 22:22:12 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int			main(int argc, char **argv)
{
	int		i;

	i = 0;
	while (argc && i < argc)
	{
		if (i >= 2147483647)
			break ;
		ft_putstr(argv[++i]);
		ft_putchar('\n');
	}
	return (0);
}
