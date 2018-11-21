/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 22:40:09 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/19 20:07:38 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_fill_str(char *src, char buf[BUF_SIZE + 1], int size)
{
	char	*str;
	int		n;
	int		i;

	if ((str = malloc(ft_strlen(src) + size + 1)) == NULL)
		return (NULL);
	n = -1;
	if (src != NULL)
	{
		while (src[++n] != '\0')
			str[n] = src[n];
		n = n - 1;
	}
	i = 0;
	while (i < size)
		str[++n] = buf[i++];
	str[++n] = '\0';
	return (str);
}
