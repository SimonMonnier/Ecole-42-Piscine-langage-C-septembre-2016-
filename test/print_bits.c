/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:06:25 by schevall          #+#    #+#             */
/*   Updated: 2016/09/22 15:53:08 by schevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_bits(unsigned char octet)
{
	int max;
	char c;

	max = 128;
	while (max)
	{
		c = '0' + (octet / max);
		write(1, &c, 1);
	   	octet %= max;
		max /= 2;
	}
}

int		main()
{
	ft_print_bits(128);
	write(1, "\n", 1);
	ft_print_bits(16);
	write(1, "\n", 1);
	ft_print_bits(255);
	write(1, "\n", 1);
	ft_print_bits(1);
	write(1, "\n", 1);
	ft_print_bits(99);
	write(1, "\n", 1);
	return (0);
}
