#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sirafe <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 15:59:39 by sirafe            #+#    #+#              #
#    Updated: 2018/11/21 16:01:16 by sirafe           ###   ########.fr        #
#                                                                              #
#******************************************************************************#


NAME = libft.a

C = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
			srcs/ft_strlen.c srcs/ft_swap.c

O = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(C) -I $(INCLUDES)
	ar rc $(NAME) $(O)
	ranlib $(NAME)

clean:
	/bin/rm -f $(O)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all