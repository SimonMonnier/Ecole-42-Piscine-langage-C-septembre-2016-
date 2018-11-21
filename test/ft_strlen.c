/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 19:47:38 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/07 19:54:46 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int							ft_strlen(char *str)
{
	int						i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}