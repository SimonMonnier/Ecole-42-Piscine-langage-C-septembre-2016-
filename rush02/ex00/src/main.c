/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:13:42 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 19:25:18 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	char	*str;
	char	**tab;
	char	buf[BUF_SIZE + 1];
	int		ret;

	str = NULL;
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		str = ft_fill_str(str, buf, ret);
	}
	tab = ft_cut_in_line(str, "\n");
	if (tab == NULL)
		return (1);
	if (ft_look_if_it_matches(tab) == -1 || ft_define_the_colle(tab) == -1)
	{
		write(2, "aucune\n", 7);
		return (1);
	}
	return (0);
}
