/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:04:38 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/15 01:29:23 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);

int		ft_list_size(t_list *begin_list);

int		main(void)
{
	t_list *a;
	int i;

	i = 0;
	a = ft_create_elem("Simon");
	ft_list_push_back(&a, "Robin");
	ft_list_push_back(&a, "Magatte");
	ft_list_push_back(&a, "Yo comment ca va ?");
	i = ft_list_size(a);
	while (a)
	{
		printf("%s\n", a->data);
		a = a->next;
	}
	printf("The size is : %d\n", i);
}
