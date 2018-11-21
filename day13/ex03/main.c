/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:04:38 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/16 12:42:23 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <unistd.h>

t_btree				*btree_create_node(void *item);
void				btree_apply_suffix(t_btree *root, void (*applyf)(void*));

void				ft_function(void *str)
{
	printf("%s", str);
}

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
	e = btree_create_node("hugo");
	f = btree_create_node("a");
	a->rigth = b;
	a->left = c;
	b->left = e;
	c->left = f;
	e->rigth = d;
	btree_apply_suffix(a, ft_function);
//	printf("The item : %s\n", a->item);
//	printf("The item : %s\n", a->left->item);
//	printf("The item : %s\n", a->rigth->item);
//	printf("The item : %s\n", a->rigth->left->item);
//	printf("The item : %s\n", a->left->rigth->item);
//	printf("The item : %s\n", a->rigth->left->rigth->item);
}
