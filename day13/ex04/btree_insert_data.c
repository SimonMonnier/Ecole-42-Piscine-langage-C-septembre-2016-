/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 12:44:04 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/16 23:27:46 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		btree_insert_data(t_btree **root,
		void *item, int (*cmpf)(void *, void *))
{
	int		cmp;
	int		cmp1;
	t_btree	*tmp;
	t_btree *new_node;

	new_node = btree_create_node(item);
	cmp = 0;
	cmp1 = 0;
	if (*root)
	{
		cmp = cmpf(*root->item, new_nobe->item);
		cmp1 = cmpf(*root->left->item, *root->rigth->item);
		if (cmp > 0)
			new_nobe->left = *root;
		else
			new_nobe->rigth = *root;
		if (cmpi1 > 0)
		{
			tmp->item = root->left->item;
			root->left->item = root->rigth->item;
			root->rigth->item = tmp->item;
		}
		btree_insert_data(root->left, cmpf);
		btree_insert_data(root->rigth, cmpf);
	}
}
