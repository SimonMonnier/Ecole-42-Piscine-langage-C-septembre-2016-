/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_validity.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 15:36:03 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/11 19:53:21 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_linear(int argc, char **argv);
int		ft_check_vert(int argc, char **argv);
int		ft_check_square(char **argv);

int		ft_check_validity(int argc, char **argv)
{
	int i;
	int y;
	int z;

	i = ft_check_linear(argc, argv);
	y = ft_check_vert(argc, argv);
	z = ft_check_square(argv);
	if (i || y || z > 0)
		return (1);
	else
		return (0);
}
