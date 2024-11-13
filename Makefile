# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-bech <sel-bech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 09:05:16 by sel-bech          #+#    #+#              #
#    Updated: 2024/11/12 17:10:18 by sel-bech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFILES = ft_putnbr.c ft_printf.c ft_puthexadecimal.c ft_putchar.c ft_putstr.c ft_getconv.c ft_putunsigned.c

OFILES = $(CFILES:.c=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o : %.c
	cc -Wall -Werror -Wextra -c $< -o $@

clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

re : clean fclean all
