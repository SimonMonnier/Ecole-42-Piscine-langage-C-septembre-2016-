/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 16:18:18 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/09 16:26:22 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int												ft_max(int *tab, int length)
{
	int											max;
	int											i;

	i = 0;
	max = tab[i];
	while (i < length)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
