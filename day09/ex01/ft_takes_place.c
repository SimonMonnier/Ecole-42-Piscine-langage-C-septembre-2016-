/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 19:33:39 by smonnier          #+#    #+#             */
/*   Updated: 2016/09/08 20:22:35 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void									ft_takes_place(int hour)
{
	if (hour < 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.",
				hour, hour + 1);
	}
	if (hour < 24 && hour > 12)
	{
		hour -= 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.",
				hour, hour + 1);
	}
	if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 P.M.");
	}
	if (hour == 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN 0.00 A.M. AND 1.00 A.M.");
	}
	printf("\n");
}
