/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square_three.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 19:04:44 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/11 19:05:01 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_square_three(char **tb)
{
	if ((tb[1][6] == tb[2][7] || tb[1][6] == tb[3][8] || tb[1][6] == tb[2][8] 
				|| tb[1][6] == tb[3][7]) && tb[1][6] != '.')
		return (1);
	if ((tb[2][6] == tb[1][7] || tb[2][6] == tb[1][8] || tb[2][6] == tb[3][7] 
				|| tb[2][6] == tb[3][8]) && tb[2][6] != '.')
		return (1);
	if ((tb[3][6] == tb[2][7] || tb[3][6] == tb[1][7] || tb[3][6] == tb[2][8] 
				|| tb[3][6] == tb[1][8]) && tb[3][6] != '.')
		return (1);
	if ((tb[1][7] == tb[2][8] && tb[1][7] != '.') 
			|| (tb[2][8] == tb[3][7] && tb[2][8] != '.') 
			|| (tb[3][7] == tb[2][6] && tb[3][7] != '.') 
			|| (tb[2][6] == tb[1][7] && tb[2][6] != '.'))
		return (1);
	return (0);
}

