/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:04:38 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/14 23:40:38 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_reverse(t_list **begin_list);

t_list	*ft_list_push_params(int ac, char **av);

void	ft_list_push_back(t_list **begin_list, void *data);

int		ft_list_size(t_list *begin_list);

int		main(int ac, char **av)
{
	t_list *a;
	int i;

	i = 0;
	a = ft_list_push_params(ac, av);
	ft_list_reverse(&a);
	while (a)
	{
		printf("%s\n", a->data);
		a = a->next;
	}
//	a = ft_create_elem("Simon");
//	ft_list_push_back(&a, "Robin");
//	i = ft_list_size(a);
//	printf("%s", a->data);
//	printf("\n");
//	printf("%s", a->next->data);
//	printf("\n");
//	printf("%d", i);
//	printf("\n");
}
