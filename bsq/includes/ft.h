/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:55:43 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/20 00:21:43 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE 4096

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
char	*ft_fill_str(char *src, char buf[BUF_SIZE], int size);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
char	**ft_cut_in_line(char *str, char *return_to_the_line);
int		ft_look_if_it_matches(char **tab);
int		ft_define_the_colle(char **tab);
void	ft_print_colle(int soluce, int x, int y);

typedef struct	s_bsq
{
	char	**map;
	int		map_heigth;
	int		map_line_width;
	int		dimension;
	char	pattern[4];
}				t_bsq;

#endif
