/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 15:25:46 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/07 20:56:37 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_find(char *str, char *to_find)
{
	int			i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char			*ft_strstr(char *str, char *to_find)
{
	int			i;

	if (!str || !to_find)
		return ((void*)0);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_find(&str[i], to_find) == 1)
				return (&str[i]);
		}
		++i;
	}
	return ((void*)0);
}
