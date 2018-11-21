/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 23:23:22 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/14 23:41:44 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void							ft_list_reverse(t_list **begin_list)
{
	t_list						*tmp1;
	t_list						*tmp2;

	while (*begin_list)
	{
		tmp1 = *begin_list;
		tmp2 = tmp1->next;
		tmp1 = tmp2->next;
		
	}
}
