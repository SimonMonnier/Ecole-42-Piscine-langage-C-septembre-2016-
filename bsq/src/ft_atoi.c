/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 19:30:21 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/21 23:28:19 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str)
{
	int		result;
	int		i;
	int		negative;

	result = 0;
	negative = 0;
	while (str && (*str == '\n' || *str == '\t' || *str == '\v' ||
			*str == ' ' || *str == '\f' || *str == '\r'))
		str++;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		negative = (str[i++] == '-') ? 1 : 0;
	while (str && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	if (negative == 1)
		return (result * -1);
	else
		return (result);
}
