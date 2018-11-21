/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 04:55:40 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/08 12:43:30 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int							ft_strlen(char *str)
{
	int						i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char						*ft_strdup(char *src)
{
	char			*dest;
	int				length;
	int				index;

	if (!src)
		return ((void*)0);
	length = ft_strlen(src);
	dest = (char*)malloc(sizeof(*dest) * (length) + 1);
	if (dest == ((void*)0))
		return ((void*)0);
	index = 0;
	while (index < length)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
