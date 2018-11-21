# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smonnier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 14:40:43 by smonnier          #+#    #+#              #
#    Updated: 2016/09/13 15:18:05 by smonnier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

SRCS = srcs/

HEADERS = includes

FILES = $(SRCS)ft_swap.c \
		$(SRCS)ft_strlen.c \
		$(SRCS)ft_strcmp.c \
		$(SRCS)ft_putstr.c \
		$(SRCS)ft_putchar.c

OBJ = ft_swap.o \
	  ft_strlen.o \
	  ft_strcmp.o  \
	  ft_putstr.o   \
	  ft_putchar.o


all :
	gcc -Wall -Werror -Wextra -I $(HEADERS) -c $(FILES)
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)

clean :
	rm -f $(OBJ)

fclean : clean 
	rm -rf $(LIB)

re : fclean all
