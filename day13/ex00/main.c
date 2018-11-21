/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:04:38 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/16 05:48:23 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree				*btree_create_node(void *item);

int		main(void)
{
	t_btree *a;
	t_btree *b;
	t_btree *c;
	t_btree *d;
	t_btree *e;
	t_btree *f;
	int i;

	i = 0;
	a = btree_create_node("Simon");
	b = btree_create_node("avec");
	c = btree_create_node("va");
	d = btree_create_node("42");
	e = btree_create_node("bilka");
	f = btree_create_node("a");
	a->rigth = b;
	a->left = c;
	b->left = e;
	c->rigth = f;
	e->rigth = d;
	printf("The item : %s\n", a->item);
	printf("The item : %s\n", a->left->item);
	printf("The item : %s\n", a->rigth->item);
	printf("The item : %s\n", a->rigth->left->item);
	printf("The item : %s\n", a->left->rigth->item);
	printf("The item : %s\n", a->rigth->left->rigth->item);
}
