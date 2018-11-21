/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbegne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 09:24:07 by cbegne            #+#    #+#             */
/*   Updated: 2016/09/06 16:37:08 by cbegne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_printhex(int nb)
{
    char digits[] = "0123456789abcdef";
    
	if (nb >= 16)
	{
		ft_printhex(nb / 16);
		ft_printhex(nb % 16);
	}
	if (nb < 16 && nb >= 0)
		ft_putchar(digits[nb]);
}

int     main(int ac, char **av)
{
    ft_printhex(atoi(av[1]));

}