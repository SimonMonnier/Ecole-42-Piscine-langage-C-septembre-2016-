/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_in_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 22:24:30 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/19 17:30:37 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_find_return_ttl(char *str, char *return_to_the_line, int n)
{
	int i;

	i = -1;
	while (return_to_the_line[++i] != '\0')
		if (str && str[n] == return_to_the_line[i])
			return (1);
	return (0);
}

int		ft_count_line(char *str, char *return_to_the_line)
{
	int nb;
	int n;

	nb = 0;
	n = 0;
	while (str && str[n] != '\0')
	{
		if (ft_find_return_ttl(str, return_to_the_line, n) == 1)
		{
			nb = nb + 1;
			while (ft_find_return_ttl(str, return_to_the_line, n) == 1)
				n = n + 1;
			n = n - 1;
		}
		n = n + 1;
	}
	return (nb + 1);
}

int		ft_strlen_line(char *str, char *return_to_the_line, int i)
{
	int n;

	n = i;
	while (str && ft_find_return_ttl(str, return_to_the_line, n) == 0 && str[n]
		!= '\0')
		n = n + 1;
	return (n - i + 1);
}

char	**ft_str_to_lines(char **tab, char *str, char *return_to_the_line)
{
	int n;
	int j;
	int i;

	n = 0;
	j = 0;
	while (str && str[n] != '\0')
	{
		while (ft_find_return_ttl(str, return_to_the_line, n) == 1)
			n = n + 1;
		if (str[n] != '\0')
		{
			i = 0;
			if ((tab[j] = malloc(ft_strlen_line(str, return_to_the_line,
				n))) == NULL)
				return (NULL);
			while (ft_find_return_ttl(str, return_to_the_line, n) == 0 &&
				str[n] != '\0')
				tab[j][i++] = str[n++];
			tab[j++][i] = '\0';
		}
	}
	return (tab);
}

char	**ft_cut_in_line(char *str, char *return_to_the_line)
{
	char	**tab;
	int		n;

	if ((tab = malloc(sizeof(char *) * ft_count_line(str, return_to_the_line)
		+ 1)) == NULL)
		return (NULL);
	tab = ft_str_to_lines(tab, str, return_to_the_line);
	n = 0;
	if (ft_find_return_ttl(str, return_to_the_line, n) == 1)
		while (ft_find_return_ttl(str, return_to_the_line, n) == 1)
			n = n + 1;
	if (str && str[n] != '\0')
		n = ft_count_line(str, return_to_the_line);
	else
		n = 0;
	tab[n] = NULL;
	if (!str)
		return (NULL);
	return (tab);
}
