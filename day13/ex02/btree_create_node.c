/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 01:17:05 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/16 05:50:22 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree										*btree_create_node(void *item)
{
	t_btree									*node;

	node = malloc(sizeof(t_btree));
	if (node)
	{
		node->left = NULL;
		node->rigth = NULL;
		node->item = item;
	}
	return (node);
}
