# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smonnier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/15 13:34:37 by smonnier          #+#    #+#              #
#    Updated: 2016/09/15 23:46:11 by smonnier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRCS = ft_putchar.c \
	   ft_putstr.c \
	   main.c

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  main.o

FLAGS = -Wall -Werror -Wextra

all :
	gcc $(FLAGS) -c $(SRCS)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
