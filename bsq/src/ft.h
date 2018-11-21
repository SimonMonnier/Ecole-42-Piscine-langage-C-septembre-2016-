/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:55:43 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 23:36:43 by smonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE 100000

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct s_target
{
	int		x;
	int		y;
}				t_target;

typedef struct s_square
{
	t_target	target;
	int         dimension;
}				t_square;

typedef	struct s_bsq
{
	char		**map;
	char		*first_line;
	int			map_heigth;
	int			map_line_width;
	char		pattern[4];
	int			dimension;
	t_square	found;
}				t_bsq;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
char	*ft_strcpy(char *str);
int		ft_atoi(char *str);
char	*ft_fill_str(char *src, char buf[BUF_SIZE], int size);
char	**ft_cut_in_line(char *str, char *return_to_the_line);
int		ft_check_map(t_bsq *bsq);
void	ft_buffer(t_bsq *bsq, int fd);
void	ft_find_square(t_bsq *bsq, t_target *target);
void	ft_print_map(t_bsq *bsq);
void	write_square(t_bsq *bsq);

#endif
