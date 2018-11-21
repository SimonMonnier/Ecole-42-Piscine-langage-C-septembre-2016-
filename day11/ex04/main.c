/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:04:38 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/15 01:31:48 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);

t_list             *ft_list_last(t_list *begin_list);

int		ft_list_size(t_list *begin_list);

int		main(void)
{
	t_list *a;
	t_list *s;
	int i;

	i = 0;
	a = ft_create_elem("Simon");
	ft_list_push_back(&a, "Robin");
	ft_list_push_back(&a, "Magatte");
	ft_list_push_back(&a, "tte");
	s = ft_list_last(a);
	printf("The last data : %s\n", s->data);
}
