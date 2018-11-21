/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 03:21:16 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/13 13:59:52 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int									ft_any(char **tab, int (*f)(char*))
{
	int								index;
	int								count;

	count = 0;
	index = 0;
	while (tab[index] != '0')
	{
		if (f(tab[index]) == '1')
			count++;
		index++;
	}
	return (count);
}
