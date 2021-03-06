/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square_nine.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 19:08:57 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/11 19:09:24 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_square_nine(char **tb)
{
	if ((tb[7][6] == tb[8][7] || tb[7][6] == tb[9][8] || tb[7][6] == tb[8][8] 
				|| tb[7][6] == tb[9][7]) && tb[7][6] != '.')
		return (1);
	if ((tb[8][6] == tb[7][7] || tb[8][6] == tb[7][8] || tb[8][6] == tb[9][7] 
				|| tb[8][6] == tb[9][8]) && tb[8][6] != '.')
		return (1);
	if ((tb[9][6] == tb[8][7] || tb[9][6] == tb[7][7] || tb[9][6] == tb[8][8] 
				|| tb[9][6] == tb[7][8]) && tb[9][6] != '.')
		return (1);
	if ((tb[7][7] == tb[8][8] && tb[7][7] != '.') 
			|| (tb[8][8] == tb[9][7] && tb[8][8] != '.') 
			|| (tb[9][7] == tb[8][6] && tb[9][7] != '.') 
			|| (tb[8][6] == tb[7][7] && tb[8][6] != '.'))
		return (1);
	return (0);
}

