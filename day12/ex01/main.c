/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 22:11:54 by schevall          #+#    #+#             */
/*   Updated: 2016/09/15 23:38:33 by schevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lb.h"
#define BUF 10000

void			ft_err(int i, char **av)
{
	if (errno == 14)
	{
		ft_putstr("cat: ");
		ft_putstr(av[i - 1]);
		ft_putstr(": Is a directory.\n");
	}
	else if (errno == EACCES)
	{
		ft_putstr("cat: ");
		ft_putstr(av[i]);
		ft_putstr(": Permission denied.\n");
	}
	else if (errno == ENOENT)
	{
		ft_putstr("cat: ");
		ft_putstr(av[i]);
		ft_putstr(": No such file or directory.\n");
	}
}

int				while_av(int ac, char **av)
{
	int			fd;
	char		buf[BUF + 1];
	int			i;
	int			ret;

	i = 1;
	while (i <= ac)
	{
		if ((fd = open(av[i], O_RDONLY)) == -1)
			ft_err(i, av);
		ret = 0;
		while ((ret = read(fd, buf, BUF)) > 0)
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		i++;
	}
	return (0);
}

int				main(int ac, char **av)
{
	char		buf[2];
	int			i;

	i = 0;
	buf[1] = '\0';
	if (ac < 2)
	{
		while (read(0, buf, 1))
			ft_putstr(buf);
	}
	else
		while_av(ac, av);
	return (0);
}
