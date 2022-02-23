# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 23:20:55 by kmethawa          #+#    #+#              #
#    Updated: 2022/02/23 18:56:22 by kmethawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
       ft_isalnum.c \
       ft_isdigit.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):$(SRCS)
	@gcc $(FLAGS) -c $(SRCS) -I./
	@ar rc $(NAME) *.o
	@rm -f *.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
