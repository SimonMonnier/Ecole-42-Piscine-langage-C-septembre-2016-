/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:49:26 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/06 22:30:01 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char			*ft_strstr(char *str, char *to_find);

int             ft_strlen(char *str)
{
	int         i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

int             main(void)
{
	char		str[] = "Salut simon, comment tu vas ?";
	char		to_find[] = ",";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}

