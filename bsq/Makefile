# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 15:13:10 by mluttrin          #+#    #+#              #
#    Updated: 2016/09/21 23:36:21 by smonnier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = ./src/main.c ./src/ft_fill_str.c ./src/ft_cut_in_line.c ./src/tools.c \
	  ./src/ft_check_if_valid.c ./src/ft_buffer.c \
	  ./src/ft_atoi.c ./src/ft_find_square.c ./src/ft_print_map.c \
	  ./src/write_square.c

OBJS = main.o ft_fill_str.o ft_cut_in_line.o tools.o ft_check_if_valid.o \
	   ft_buffer.o ft_atoi.o ft_find_square.o ft_print_map.o \
	   write_square.o

HEADER = ./includes/

FLAGS = -Wall -Wextra -Werror -g

GCC = gcc

all :
	@make $(NAME)

$(NAME) :
	$(GCC) $(FLAGS) -I$(HEADER) -c $(SRC)
	$(GCC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
