# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboonchu <kboonchu@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 17:45:40 by kboonchu          #+#    #+#              #
#    Updated: 2022/02/23 23:44:03 by kboonchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strchr.c ft_strtrim.c ft_strlen.c ft_substr.c ft_isdigit.c ft_atoi.c ft_isalpha.c ft_isascii.c \
		ft_isalnum.c ft_isprint.c ft_strlcpy.c ft_memset.c ft_toupper.c ft_tolower.c ft_strlcat.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c \
		ft_strdup.c ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c
OBJS = ${SRCS:.c=.o}

BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c
BOBJS = $(BSRCS:.c=.o)

INCLUDES = libft.h

all: $(NAME)

$(NAME): $(SRCS) $(OBJS) $(INCLUDES)
	ar -crs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c -I/$(INCLUDES) $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

bonus: $(NAME) $(BOBJS)
	ar -crs $(NAME) $(BOBJS)

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus
