/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:04:38 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/14 22:35:26 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	t_list *a;

	a = ft_create_elem("Simon");
	ft_list_push_back(&a, "Robin");
	while (a)
	{
		printf("%s\n", a->data);
		a = a->next;
	}
	return (0);
}
