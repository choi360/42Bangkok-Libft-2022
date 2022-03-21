# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmethawa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 23:20:55 by kmethawa          #+#    #+#              #
#    Updated: 2022/03/21 17:01:42 by kmethawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
       ft_isalnum.c \
       ft_isdigit.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_strtrim.c \
       ft_substr.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_striteri.c \
       ft_strmapi.c \
       ft_strjoin.c

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
