/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 19:00:48 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/11 19:17:00 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_square_one(char **tb);
int		ft_check_square_two(char **tb);
int		ft_check_square_three(char **tb);
int		ft_check_square_four(char **tb);
int		ft_check_square_five(char **tb);
int		ft_check_square_six(char **tb);
int		ft_check_square_seven(char **tb);
int		ft_check_square_eight(char **tb);
int		ft_check_square_nine(char **tb);

int		ft_check_square(char **tb)
{
	int i;

	i = 0;
	i = i + ft_check_square_one(tb);
	i = i + ft_check_square_two(tb);
	i = i + ft_check_square_three(tb);
	i = i + ft_check_square_four(tb);
	i = i + ft_check_square_five(tb);
	i = i + ft_check_square_six(tb);
	i = i + ft_check_square_seven(tb);
	i = i + ft_check_square_eight(tb);
	i = i + ft_check_square_nine(tb);
	return (i);
}
