/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 11:19:44 by mtaieb            #+#    #+#             */
/*   Updated: 2016/09/11 21:51:26 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_params_size(int argc);
int		ft_check_char(int argc, char **argv);
int		ft_check_validity(int argc, char **argv);
void	ft_putstr(char *str);
int		ft_solve_sudoku(int argc, char **argv, int i);

int		main(int argc, char **argv)
{
	int err_param;
	int err_char;
	int err_num;
	int i;

	i = 0;
	err_param = ft_check_params_size(argc);
	err_char = ft_check_char(argc, argv);
	err_num = ft_check_validity(argc, argv);
	if (err_param || err_char || err_num)
		write(1, "Erreur\n", 7);
	else
	{
		ft_solve_sudoku(argc, argv, i);
		ft_putstr(argv[1]);
		ft_putstr(argv[2]);
		ft_putstr(argv[3]);
		ft_putstr(argv[4]);
		ft_putstr(argv[5]);
		ft_putstr(argv[6]);
		ft_putstr(argv[7]);
		ft_putstr(argv[8]);
		ft_putstr(argv[9]);
	}
	return (0);
}
