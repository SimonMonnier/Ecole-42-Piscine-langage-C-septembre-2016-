# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 15:13:10 by mluttrin          #+#    #+#              #
#    Updated: 2016/09/18 05:52:04 by mluttrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = ./src/ft_putchar.c ./src/ft_putstr.c ./src/ft_putnbr.c ./src/ft_strlen.c \
./src/main.c ./src/ft_fill_str.c ./src/ft_cut_in_line.c \
./src/ft_define_the_colle.c ./src/ft_look_if_it_matches.c\
./src/ft_print_colle.c

OBJS = ft_putchar.o ft_putstr.o ft_putnbr.o ft_strlen.o main.o ft_fill_str.o \
ft_cut_in_line.o ft_define_the_colle.o ft_look_if_it_matches.o\
ft_print_colle.o

HEADER = ./includes/

FLAGS = -Wall -Wextra -Werror

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
