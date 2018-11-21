/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 21:15:32 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/14 23:12:46 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void							ft_list_clear(t_list **begin_list)
{
	t_list						*tmp;

	while (*begin_list)
	{
		tmp = *begin_list;
		*begin_list = *begin_list->next;
		free(tmp);
		tmp = NULL;
	}
}
