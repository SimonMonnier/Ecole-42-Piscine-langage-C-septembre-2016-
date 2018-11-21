/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 19:03:55 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/11 19:04:18 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_square_two(char **tb)
{
	if ((tb[1][3] == tb[2][4] || tb[1][3] == tb[3][5] || tb[1][3] == tb[2][5] 
				|| tb[1][3] == tb[3][4]) && tb[1][3] != '.')
		return (1);
	if ((tb[2][3] == tb[1][4] || tb[2][3] == tb[1][5] || tb[2][3] == tb[3][4] 
				|| tb[2][3] == tb[3][5]) && tb[2][3] != '.')
		return (1);
	if ((tb[3][3] == tb[2][4] || tb[3][3] == tb[1][4] || tb[3][3] == tb[2][5] 
				|| tb[3][3] == tb[1][5]) && tb[3][3] != '.')
		return (1);
	if ((tb[1][4] == tb[2][5] && tb[1][4] != '.') 
			|| (tb[2][5] == tb[3][4] && tb[2][5] != '.') 
			|| (tb[3][4] == tb[2][3] && tb[3][4] != '.') 
			|| (tb[2][3] == tb[1][4] && tb[2][3] != '.'))
		return (1);
	return (0);
}
